#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rows; // 2
    cin >> rows;

    int leftSum = 0, rightSum = 0;
    int number;

    for (int row = 0; row < rows; row++) {
        cin >> number;
        leftSum += number;
    }

    for (int row = 0; row < rows; row++) {
        cin >> number;
        rightSum += number;
    }

    if (leftSum == rightSum) {
        cout << "Yes, sum = " << leftSum << endl;
    } else {
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
    }

    return 0;
}
