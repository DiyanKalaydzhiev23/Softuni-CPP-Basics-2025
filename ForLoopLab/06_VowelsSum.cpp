#include <iostream>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    int vowelsSum = 0;

    for (char letter : text) {
        if (letter == 'a') {
            vowelsSum += 1;
        } else if (letter == 'e') {
            vowelsSum += 2;
        } else if (letter == 'i') {
            vowelsSum += 3;
        } else if (letter == 'o') {
            vowelsSum += 4;
        } else if (letter == 'u') {
            vowelsSum += 5;
        }
    }

    cout << vowelsSum << endl;

    return 0;
}
