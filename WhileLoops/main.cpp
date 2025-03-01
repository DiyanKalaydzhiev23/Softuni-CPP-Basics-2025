#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number != 1) {
        if (number % 2 == 0) {
            number /= 2;
        } else {
            number = (3 * number) + 1;
        }

        cout << number << endl;
    }
}
