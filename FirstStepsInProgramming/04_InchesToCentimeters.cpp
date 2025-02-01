#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    const double ONE_INCH_TO_CENTIMETERS = 2.54;

    double inches;
    cin >> inches;

    double centimeters = inches * ONE_INCH_TO_CENTIMETERS;

    cout << centimeters;
}