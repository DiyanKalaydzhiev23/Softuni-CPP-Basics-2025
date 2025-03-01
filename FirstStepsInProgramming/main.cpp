#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    const double ONE_SQUARE_METER_PRICE = 7.61;
    const double DISCOUNT_PERCENT = 0.18;

    double square_meters_needed;
    cin >> square_meters_needed;

    double priceBeforeDiscount = square_meters_needed * ONE_SQUARE_METER_PRICE;
    double discount = priceBeforeDiscount * DISCOUNT_PERCENT;
    double priceAfterDiscount = priceBeforeDiscount - discount;

    cout << "The final price is: " << priceAfterDiscount << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;
}