#include <iostream>

using namespace std;

int main() {
    string dayOfTheWeek;
    cin >> dayOfTheWeek;

    int ticketPrice;

    if (dayOfTheWeek == "Wednesday" || dayOfTheWeek == "Thursday") {
        ticketPrice = 14;
    } else if (dayOfTheWeek == "Saturday" || dayOfTheWeek == "Sunday") {
        ticketPrice = 16;
    } else {
        ticketPrice = 12;
    }

    cout << ticketPrice;

    return 0;
}
