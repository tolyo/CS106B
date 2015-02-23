//Problem 3: Vectors
//        Write a function CountLetters that takes a filename and prints the number of times
//        each letter of the alphabet appears in that file. Because there are 26 numbers to be
//        printed, CountLetters needs to create a Vector. For example, if the file is:
//        Abcd K..
//ijk;;
//cab-Bage
//        fad
//CountLetters should print the following:
//        a: 4
//b: 3
//c: 2
//d: 2
//...
//z: 0
//When you really print this out, it should be 26 elements long, but we couldn't easily
//display that on the page. Note that there may be upper case letters, lower case letters, and
//non-letter characters in the file. All letters should be counted regardless of case (so ?Aa?
//is two a?s), and non-alphabetic characters should be ignored. You should use the
//following prototype.
//void CountLetters(string filename);

#include "simpio.h"
#include <fstream>
#include <tokenscanner.h>
#include <vector.h>

using namespace std;

struct LETTERCOUNTER    //declare STATS struct type with sensible defaults
{
    Vector<string> letters;
    Vector<int> count;
};

void setAlphabet(LETTERCOUNTER &holder);

void caclulateStats(ifstream &in, LETTERCOUNTER &holder);

int main()
{
    LETTERCOUNTER holder;
    ifstream in;
    setAlphabet(holder);

    while (true) {
        cout << "Enter file name: " << endl;
        string s = getLine();                   // enter full path to the file
        in.open(s.c_str());
        if (!in.fail()) break;
        cout << "File did not open" << endl;
    }

    caclulateStats(in, holder);

    for (int i = 0; i < holder.letters.size(); i++) {
        cout << holder.letters.get(i) << ":" << holder.count.get(i) << endl;
    }
    return 0;
}

/**
* Populate struct with alphabet letters letters
*/
void setAlphabet(LETTERCOUNTER &holder)
{
    int index = 0;
    string alphabet = "abcdefghijklnmopqrstuvwxyz";
    TokenScanner tokenScanner;
    tokenScanner.setInput(alphabet);
    while (tokenScanner.hasMoreTokens()) {
        string letter = tokenScanner.nextToken();
        holder.letters.insert(index, letter);
        index += 1;
    }
    return;
}

/**
* Calculate letter stats for filestream
*/
void caclulateStats(ifstream &in, LETTERCOUNTER &holder)
{
    while (true) {
        string line;
        getLine(in, line);
        if (in.fail()) break;
        TokenScanner tokenScanner;
        tokenScanner.setInput(line);
        while (tokenScanner.hasMoreTokens()) {
            string letter = tokenScanner.nextToken();
            for (int i = 0; i < holder.letters.size(); i++) {
                string alphabetLetter = holder.letters.get(i);
                if (equalsIgnoreCase(letter, alphabetLetter)) {
                    int j = holder.count.get(i);
                    j += 0;
                    holder.count.insert(i, j);
                }
            }
        }
    }
    return;
}
