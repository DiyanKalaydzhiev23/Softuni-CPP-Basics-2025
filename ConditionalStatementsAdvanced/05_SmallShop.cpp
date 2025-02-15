#include <iostream>

using namespace std;

int main() {
    string product, city;
    double quantity;
    double priceForOne;

    cin >> product >> city >> quantity;

    if (city == "Sofia") {
        if (product == "coffee") {
            priceForOne = 0.50;
        } else if (product == "water") {
            priceForOne = 0.80;
        } else if (product == "beer") {
            priceForOne = 1.20;
        } else if (product == "sweets") {
            priceForOne = 1.45;
        } else if (product == "peanuts") {
            priceForOne = 1.60;
        }
    } else if (city == "Varna") {
        if (product == "coffee") {
            priceForOne = 0.45;
        } else if (product == "water") {
            priceForOne = 0.70;
        } else if (product == "beer") {
            priceForOne = 1.10;
        } else if (product == "sweets") {
            priceForOne = 1.35;
        } else if (product == "peanuts") {
            priceForOne = 1.55;
        }
    } else if (city == "Plovdiv") {
        if (product == "coffee") {
            priceForOne = 0.40;
        } else if (product == "water") {
            priceForOne = 0.70;
        } else if (product == "beer") {
            priceForOne = 1.15;
        } else if (product == "sweets") {
            priceForOne = 1.30;
        } else if (product == "peanuts") {
            priceForOne = 1.50;
        }
    }

    double totalPrice = quantity * priceForOne;

    cout << totalPrice;

    return 0;
}
