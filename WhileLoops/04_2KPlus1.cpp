#include <iostream>

using namespace std;

int main() {
    const int FIRST_NUMBER = 1;

    int maxNum;  // ex. 8
    cin >> maxNum;

    int currentNum = FIRST_NUMBER;

    while (currentNum <= maxNum) {
        cout << currentNum << endl; // 1 -> 1 * 2 + 1 -> 3 -> 7 -> 15 ...
        currentNum = (currentNum * 2) + 1;
    }

    return 0;
}
