#include <iostream>

using namespace std;

int main() {
    int daysCount, hoursCount;
    cin >> daysCount >> hoursCount;

    cout.setf(ios::fixed);
    cout.precision(2);

    double totalPrice = 0;

    for (int day = 1; day <= daysCount; day++) {
        double priceForDay = 0;

        for (int hour = 1; hour <= hoursCount; hour++) {
            if (day % 2 == 0 && hour % 2 == 1) {
                priceForDay += 2.50;
            } else if (day % 2 == 1 && hour % 2 == 0) {
                priceForDay += 1.25;
            } else {
                priceForDay += 1;
            }
        }

        cout << "Day: " << day << " - " << priceForDay << " leva" << endl;
        totalPrice += priceForDay;
    }

    cout << "Total: " << totalPrice << " leva" << endl;

    return 0;
}
