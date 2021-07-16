// https://codeforces.com/contest/1005/problem/A

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main() {
    // input = number of stairs climbed
    // input = sequence of stairs
    int numStairs;
    cin >> numStairs;
    int stairs[numStairs];
    memset(stairs, 0, sizeof stairs);
 
    // Counting number of stairways
    int stairways = 0;
    for (int i = 0; i < numStairs; i++) {
        cin >> stairs[i];
 
        if (stairs[i] == 1) stairways++;
    }
    cout << stairways << "\n";
 
    // counting number of steps in each stairway
    int stairwaySteps[stairways];
    memset(stairwaySteps, 0, sizeof stairwaySteps);
    int stairNum = -1;
    for (int i = 0; i < numStairs; i++) {
        if (stairs[i] == 1) stairNum++;
        stairwaySteps[stairNum]++;
    }
 
    for (int i = 0; i < stairways; i++) {
        cout << stairwaySteps[i] << " ";
    }
 
    // output = number of stairways
    // output = number of steps in each stairway  
}