//Problem 2: Files and Structs
//When we grade your exams, we?re going to keep track of some statistics like the min,
//max and average scores. Define a struct containing these statistics. Then, write a
//function that takes a filename, reads the scores from it (one per line where 0 <= score <=
//100), and returns the struct you defined. For efficiency?s sake, your function should
//make only a single pass over the file.
#include "simpio.h"
#include <fstream>

using namespace std;

struct STATS    //declare STATS struct type with sensible defaults
{
    int min = 100;
    int max = 0;
    double average = 0.00;
    int count = 0;
};

int caclulateStats(ifstream &in, STATS &holder);

int main()
{
    STATS holder;
    ifstream in;

    while (true) {
        cout << "Enter file name: " << endl;
        string s = getLine();                   // enter full path to the file
        in.open(s.c_str());
        if (!in.fail()) break;
        cout << "File did not open" << endl;
    }
    caclulateStats(in, holder);
    cout
        << " min: " << holder.min
        << " max: " << holder.max
        << " average: " << holder.average
    << endl;
    return 0;
}


int caclulateStats(ifstream &in, STATS &holder)
{
    while (true) {
        string line;
        getLine(in, line);
        if (in.fail()) break;
        int number = atof(line.c_str());
        if (number < holder.min) holder.min = number;
        if (number > holder.max) holder.max = number;
        holder.average =
            (holder.average * holder.count + number) /
            (holder.count + 1);
        holder.count += 1;
    }
    return 0;
}
