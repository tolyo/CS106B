#include <iostream>

using namespace std;

string obenglobish(string basic_string);

int main() {
    while (true) {
        string word;
        cout << "Enter a word: ";
        getline(cin, word);
        if (word == "") break;
        string trans = obenglobish(word);
        cout << word << " -> " << trans << endl;
    }
    return 0;
}

string obenglobish(string basic_string) {
    string new_string = "";
    string vowels = "aeiou";
    for (int i = 0; i < basic_string.length(); ++i) {
        if (vowels.find(basic_string[i]) == string::npos) {
            new_string += (basic_string[i]);
        } else {
            new_string += "ob";
            new_string += basic_string[i];
        }
    }
    return new_string;
}