#include <iostream>

using namespace std;

int main() {
    int hour;
    string dayOfTheWeek;

    cin >> hour >> dayOfTheWeek;

    if (hour >= 10 && hour <= 18 && dayOfTheWeek != "Sunday") {
        cout << "open";
    } else {
        cout << "closed";
    }

    return 0;
}
