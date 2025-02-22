#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number; // 10

    for (int currentNumber = 1; currentNumber <= number; currentNumber += 3) {
        cout << currentNumber << endl;
    }

    return 0;
}
