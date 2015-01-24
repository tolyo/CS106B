/*
 * average.cpp
 * ------------------
 * This program ads scores and prints their average
 */
#include "simpio.h"
#include <iostream>

using namespace std;

const int NumScores = 4;

double GetScoresAndAverage(int numScores);

int main()
{
    cout << "This program averages " << NumScores << " scrores. " << endl;
    double average = GetScoresAndAverage(NumScores);
    cout << "The average is " << average << "." << endl;
    return 0;
}

/* Function: GetScoresAndAverage
 * Usage: avg = GetScoresAndAverage(10);
 * ----------------------------------------------------
 * This function prompts the user for a set of values and returns
 * the average.
 */
double GetScoresAndAverage(int numScores) {
    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        cout << "Next score? ";
        int nextScore = getInteger();
        sum += nextScore;
    }
    return double(sum)/numScores;
}