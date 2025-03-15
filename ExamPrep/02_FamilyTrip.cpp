#include <iostream>

using namespace std;

int main() {
    const int NIGHTS_FOR_DISCOUNT = 7;
    const double PERCENTAGE_DISCOUNT = 0.05;

    double budget;
    cin >> budget;

    int nights;
    cin >> nights;

    double priceForNight;
    cin >> priceForNight;

    double percentageForBonusExpenses;
    cin >> percentageForBonusExpenses;

    if (nights > NIGHTS_FOR_DISCOUNT) {
        priceForNight *= (1 - PERCENTAGE_DISCOUNT);
    }

    double extraExpenses = budget * (percentageForBonusExpenses / 100);
    double nightsPrice = priceForNight * nights;
    double totalPrice = extraExpenses + nightsPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalPrice <= budget) {
        cout << "Ivanovi will be left with " << budget - totalPrice << " leva after vacation.";
    } else {
        cout << totalPrice - budget << " leva needed.";
    }

    return 0;
}
