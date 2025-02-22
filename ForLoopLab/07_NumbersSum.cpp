#include <iostream>

using namespace std;

int main() {
    int rows;
    cin >> rows;

    int sum = 0;

    int number;
    for (int row = 0; row < rows; row++) {
        cin >> number;
        sum += number;
    }

    cout << sum;

    return 0;
}
