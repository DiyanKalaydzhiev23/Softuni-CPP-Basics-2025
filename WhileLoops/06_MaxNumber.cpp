#include <iostream>
#include <climits>

using namespace std;

int main() {
    int maxNumber = INT_MIN;
    int currentNumber;

    while (cin >> currentNumber) {
        if (currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }
    }

    cout << maxNumber;
}
