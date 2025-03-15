#include <iostream>

using namespace std;

int main() {
    const double PERCENT_DISCOUNT = 0.50;
    const int COUNT_PRODUCT_FOR_DISCOUNT = 3;

    double budget;
    cin >> budget;
    cin.ignore();


    cout.setf(ios::fixed);
    cout.precision(2);

    int productsCount = 0;
    double moneySpent = 0;

    string productName;
    double productPrice;

    while (getline(cin, productName) && productName != "Stop") {
        cin >> productPrice;
        cin.ignore();

        productsCount++;

        if (productsCount % COUNT_PRODUCT_FOR_DISCOUNT == 0) {
            productPrice *= PERCENT_DISCOUNT;
        }

        moneySpent += productPrice;

        if (moneySpent > budget) {
            cout << "You don't have enough money!" << endl;
            cout << "You need " << moneySpent - budget << " leva!" << endl;
            return 0;
        }
    }

    cout << "You bought " << productsCount << " products for " << moneySpent << " leva." << endl;

    return 0;
}
