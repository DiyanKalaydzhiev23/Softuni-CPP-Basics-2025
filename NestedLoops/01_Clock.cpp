#include <iostream>

using namespace std;

int main() {
    for (int hour = 0; hour < 24; hour++) {
        for (int minutes = 0; minutes < 60; minutes++) {
            cout << hour << ":" << minutes << endl;
        }
    }
    return 0;
}
