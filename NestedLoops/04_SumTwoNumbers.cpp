#include <iostream>

using namespace std;

int main() {
    int startNum, endNum, searchNum, result; // 23, 24, 20
    cin >> startNum >> endNum >> searchNum;

    int combinations = 0;

    for (int firstNum = startNum; firstNum <= endNum; firstNum++) {
        for (int secondNum = startNum; secondNum <= endNum; secondNum++) {
            combinations++;
            result = firstNum + secondNum;

            if (result == searchNum) {
                cout <<
                     "Combination N:" << combinations <<
                     " (" << firstNum << " + " << secondNum << " = " << searchNum << ")"
                     << endl;

                return 0;
            }
        }
    }

    cout << combinations << " combinations - neither equals " << searchNum << endl;

    return 0;
}
