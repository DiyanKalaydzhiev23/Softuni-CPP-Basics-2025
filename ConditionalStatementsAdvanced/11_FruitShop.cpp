#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string product, dayOfTheWeek;
    double quantity, price = 0;

    cin >> product >> dayOfTheWeek >> quantity;

    bool isWeekend = (dayOfTheWeek == "Saturday" || dayOfTheWeek == "Sunday");
    bool isWorkday = (
            dayOfTheWeek == "Monday" || dayOfTheWeek == "Tuesday" ||
            dayOfTheWeek == "Wednesday" || dayOfTheWeek == "Thursday" ||
            dayOfTheWeek == "Friday"
    );

    if (product == "banana") {
        price = isWeekend ? 2.70 : 2.50;
    } else if (product == "apple") {
        price = isWeekend ? 1.25 : 1.20;
    } else if (product == "orange") {
        price = isWeekend ? 0.90 : 0.85;
    } else if (product == "grapefruit") {
        price = isWeekend ? 1.60 : 1.45;
    } else if (product == "kiwi") {
        price = isWeekend ? 3.00 : 2.70;
    } else if (product == "pineapple") {
        price = isWeekend ? 5.60 : 5.50;
    } else if (product == "grapes") {
        price = isWeekend ? 4.20 : 3.85;
    }

    if (price == 0 || (!isWeekend && !isWorkday)) {
        cout << "error";
    } else {
        cout << fixed << setprecision(2) << (price * quantity);
    }

    return 0;
}
