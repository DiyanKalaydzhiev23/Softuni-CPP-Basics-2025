#include <iostream>
#include <climits>

using namespace std;

int main() {
    int minNumber = INT_MAX;
    int currentNumber;

    while (cin >> currentNumber) {
        if (currentNumber < minNumber) {
            minNumber = currentNumber;
        }
    }

    cout << minNumber;
}
