#include <iostream>

using namespace std;

int main() {
    int maxSum;
    cin >> maxSum;  // ex. 100

    int currentSum = 0;
    int currentNumber;

    while (currentSum < maxSum) {
        cin >> currentNumber;
        currentSum += currentNumber; // ex. i = 1 -> currentNumber = 10 -> currentSum = 10;
    }

    cout << currentSum;

    return 0;
}
