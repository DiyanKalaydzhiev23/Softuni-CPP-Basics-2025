#include <iostream>

using namespace std;

int main() {
    double age;
    char gender;
    string title;

    cin >> age >> gender;

    if (gender == 'm') {
        if (age >= 16) {
            title = "Mr.";
        } else {
            title = "Master";
        }
    } else if (gender == 'f') {
        if (age >= 16) {
            title = "Ms.";
        } else {
            title = "Miss";
        }
    }

    cout << title;

    return 0;
}
