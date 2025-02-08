#include <iostream>

using namespace std;

int main() {
    double speed;
    cin >> speed;

    string speedInText;

    if (speed <= 10) {
        speedInText = "slow";
    } else if (speed <= 50) {
        speedInText = "average";
    } else if (speed <= 150) {
        speedInText = "fast";
    } else if (speed <= 1000) {
        speedInText = "ultra fast";
    } else {
        speedInText = "extremely fast";
    }

    cout << speedInText;
}
