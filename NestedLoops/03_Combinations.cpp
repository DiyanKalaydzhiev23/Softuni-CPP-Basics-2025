#include <iostream>

using namespace std;

int main() {
    int maxNumber;
    cin >> maxNumber; // 25

    int countMatches = 0;

    for (int x1 = 0; x1 <= maxNumber; x1++) {
        for (int x2 = 0; x2 <= maxNumber; x2++) {
            for (int x3 = 0; x3 <= maxNumber; x3++) {
                if (x1 + x2 + x3 == maxNumber) {
                    countMatches++;
                }
            }
        }
    }

    cout << countMatches;

    return 0;
}
