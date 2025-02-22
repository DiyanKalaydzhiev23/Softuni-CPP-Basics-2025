#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string text;
    getline(cin, text);

//    for (int i = 0; i < text.length(); i++) {
//        cout << text[i] << endl;
//    }

    for (char letter : text) {
        cout << letter << endl;
    }


    return 0;
}
