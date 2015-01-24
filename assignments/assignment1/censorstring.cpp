#include "simpio.h"
#include "strlib.h"
using namespace std;


string removeOccurences(string &censoredString, string subString);
//string removeOccurences(string censoredString, string subString);
int main() {
    // read in string to censor
    string myString = getLine("Enter string: ");
    string oldString = myString;
    // read in chars to remove
    string subString = getLine("Enter chars to remove from string: ");
    cout << "old string: " + oldString + " new string: " + removeOccurences(myString, subString) << endl;
    return 0;
}

//string removeOccurences(string censoredString, string subString) {
//    string newString;
//    bool add;
//    for (int i = 0; i < censoredString.length(); i++) {
//        add = true;
//        for (int j = 0; j < subString.length(); j++) {
//            if (censoredString[i] == subString[j]) {
//                add = false;
//            }
//        }
//        if (add) newString += censoredString[i];
//    }
//    return newString;
//}

string removeOccurences(string &censoredString, string subString) {
    for (int j = 0; j < subString.length(); j++) {
        int found = 0;
        while ((found = censoredString.find(subString[j], found)) != string::npos)
            censoredString.erase(found, 1);
    }
    return censoredString;
}