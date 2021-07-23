#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef uint8_t BYTE;
const int BLOCK = 512;

int main(int argc, char *argv[]) {
	// OPEN MEMORY CARD
    FILE *mem = fopen(argv[1], "r"); // Memory card
    BYTE buffer[BLOCK]; // Each block in memory (but stored in this variable one at a time)
	for (int i = 0; i < BLOCK; i++) buffer[i] = 0; // init buffer to 0
    
	if (mem == NULL) {
		printf("Error opening file.\n");
		return 1;
	}

	// NUMBER OF JPEGS CREATED
	int num_jpg = 0;
	// JPEG FILE NAME
	char *jpg_name;
	// PROVIDE ENOUGH SPACE FOR THE FILE NAME
	jpg_name = malloc(sizeof(char) * (strlen(argv[1]) + 5));
	// CREATE THE NEW JPG FILE
	FILE *jpeg;
	// ALLOCATE SPACE FOR THE NEW JPG FILE
	// jpeg = malloc(sizeof(FILE));
	
	// REPEAT UNTIL END OF CARD
	// READ 512 BYTES INTO THE BUFFER
	while (fread(buffer, sizeof(BYTE), BLOCK, mem) == BLOCK) {
		// print file name
		// IF BUFFER HAS BEGINNING OF A JPEG FILE
		if (buffer[0] == 0xFF && buffer[1] == 0xD8 && buffer[2] == 0xFF && (buffer[3] & 0xF0) == 0xE0) {
			if (num_jpg != 0) { // THERE ARE PREVIOUS JPEGS
				// CLOSE THE PREVIOUS JPG FILE
				fclose(jpeg);
			}
			// CREATE NEW JPG FILE NAME
			sprintf(jpg_name, "%03i.jpg", num_jpg);
			// CREATE NEW JPG FILE
			jpeg = fopen(jpg_name, "w");
			// INCREMENT NUMBER OF JPGS CREATED
			num_jpg++;
			printf("Name: %s", jpg_name);
		}
		if (num_jpg != 0) { // THERE IS A JPEG FILE OPEN
			// WRITE BUFFER TO JPG FILE
			fwrite(buffer, sizeof(BYTE), BLOCK, jpeg);
		}
	}
	// FREE MEMORY
	free(jpg_name);
	// FREE JPEG FILE
	// free(jpeg);
	// CLOSE MEMORY CARD
	fclose(mem);
	return 0;
}