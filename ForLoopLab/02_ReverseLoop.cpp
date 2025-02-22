#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int currentNumber = number; currentNumber >= 1; currentNumber--) {
        cout << currentNumber << endl;
    }

    return 0;
}
