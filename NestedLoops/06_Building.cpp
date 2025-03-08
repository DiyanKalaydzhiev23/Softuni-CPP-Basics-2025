#include <iostream>

using namespace std;

int main() {
    int floors, rooms; // 6, 4
    cin >> floors >> rooms;

    for (int floor = floors; floor >= 1; floor--) {
        for (int room = 0; room < rooms; room++) {
            if (floor == floors) {
                cout << "L";
            } else if (floor % 2 == 0) {
                cout << "O";
            } else {
                cout << "A";
            }

            cout << floor << room << " ";  // L60 L61 L62 L63
        }

        cout << endl;
    }

    return 0;
}
