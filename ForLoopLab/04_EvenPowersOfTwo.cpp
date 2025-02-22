#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int NUMBER_TO_BE_POWERED = 2;

    int numberOfPowers;
    cin >> numberOfPowers;

    for (int power = 0; power <= numberOfPowers; power += 2) {
        cout << pow(NUMBER_TO_BE_POWERED, power) << endl;
    }

    return 0;
}
