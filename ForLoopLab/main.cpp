#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rows;
    cin >> rows;

    int number;
    int evenRowsSum = 0, oddRowsSum = 0;

    for (int row = 0; row < rows; row++) {
        cin >> number;

        if (row % 2 == 0) {
            evenRowsSum += number;
        } else {
            oddRowsSum += number;
        }
    }

    if (evenRowsSum == oddRowsSum) {
        cout << "Yes" << endl;
        cout << "Sum = " << evenRowsSum << endl;
    } else {
        cout << "No" << endl;
        cout << "Diff = " << abs(evenRowsSum - oddRowsSum) << endl;
    }

    return 0;
}
