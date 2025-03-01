#include <iostream>

using namespace std;

int main() {
//    Option 1
//    string word;
//    cin >> word;
//
//    while (word != "Stop") {
//        cout << word << endl;
//        cin >> word;
//    }

//    Option 2
//    string word;
//
//    while (true) {
//        cin >> word;
//
//        if (word == "Stop") break;
//
//        cout << word << endl;
//    }


//   Option 3
    string word;

    while (cin >> word && word != "Stop") {
        cout << word << endl;
    }

//   Option 4
//    string word;
//
//    while (word != "Stop") {
//        cin >> word;
//        cout << word << endl;
//    }

    return 0;
}
