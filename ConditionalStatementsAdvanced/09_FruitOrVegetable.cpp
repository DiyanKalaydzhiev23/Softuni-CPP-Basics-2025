#include <iostream>

using namespace std;

int main() {
    string food;
    cin >> food;

    if (
            food == "banana" || food == "apple" ||
            food == "kiwi" || food == "cherry" ||
            food == "lemon" || food == "grapes"
            ) {
        cout << "fruit";
    } else if (
            food == "tomato" || food == "cucumber" ||
            food == "pepper" || food == "carrot"
            ) {
        cout << "vegetable";
    } else {
        cout << "unknown";
    }

    return 0;
}
