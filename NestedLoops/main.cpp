#include <iostream>

using namespace std;

int main() {
    bool cFound = false, oFound = false, nFound = false;
    string symbol;  // one symbol or End
    string word = "";

    while (cin >> symbol && symbol != "End") {
        char letter = symbol[0];

        if (!isalpha(letter)) { // If it's not a letter
            continue;
        }

        if (letter != 'c' && letter != 'o' && letter != 'n') {
            word += letter;
            continue;
        }

        if (cFound && letter == 'c') {
            word += letter;
        } else if (oFound && letter == 'o') {
            word += letter;
        } else if (nFound && letter == 'n') {
            word += letter;
        }

        if (!cFound && letter == 'c') {
            cFound = true;
        } else if (!oFound && letter == 'o') {
            oFound = true;
        } else if (!nFound && letter == 'n') {
            nFound = true;
        }

        if (cFound && oFound && nFound) {
            cout << word << " ";
            word.clear(); // makes the string empty again == word = ""
            cFound = false;
            oFound = false;
            nFound = false;
        }
    }


    return 0;
}
