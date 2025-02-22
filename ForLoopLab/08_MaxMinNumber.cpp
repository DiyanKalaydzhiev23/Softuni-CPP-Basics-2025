#include <iostream>
#include <climits>

using namespace std;

int main() {
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    int rows;
    cin >> rows;

    int number;
    for (int row = 0; row < rows; row++) {
        cin >> number;

        if (number > maxNumber) {
            maxNumber = number;
        }

        if (number < minNumber) {
            minNumber = number;
        }
    }

    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;

    return 0;
}
