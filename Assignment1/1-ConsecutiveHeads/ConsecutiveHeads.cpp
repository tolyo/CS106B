/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int totalCount = 0;
    int count = 0;
    string type;
    srand(time(NULL));

    while(count < 2) {
        totalCount++;
        int d = ( rand() % 2 );
        // 0 - heads; 1 - tails
        if ((d == 0 && type == "heads") ||
            (d == 1 && type == "tails")) {
            count++;
        } else {
            if (d == 0) {
                type = "heads";
                count = 0;
            } else {
                type = "tails";
                count = 0;
            }
        }
        cout << type << endl;
    }
    cout << "It took " << totalCount << " flips to get 3 consecutive flips" << endl;
    return 0;
}
