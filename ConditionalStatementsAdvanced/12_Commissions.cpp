#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string city;
    double sales, commissionPercent;

    cin >> city >> sales;

    if (sales < 0) {
        cout << "error";
        return 1;
    }

    if (city == "Sofia") {
        if (sales <= 500) {
            commissionPercent = 0.05;
        } else if (sales <= 1000) {
            commissionPercent = 0.07;
        } else if (sales <= 10000) {
            commissionPercent = 0.08;
        } else {
            commissionPercent = 0.12;
        }
    } else if (city == "Varna") {
        if (sales <= 500) {
            commissionPercent = 0.045;
        } else if (sales <= 1000) {
            commissionPercent = 0.075;
        } else if (sales <= 10000) {
            commissionPercent = 0.10;
        } else {
            commissionPercent = 0.13;
        }
    } else if (city == "Plovdiv") {
        if (sales <= 500) {
            commissionPercent = 0.055;
        } else if (sales <= 1000) {
            commissionPercent = 0.08;
        } else if (sales <= 10000) {
            commissionPercent = 0.12;
        } else {
            commissionPercent = 0.145;
        }
    } else {
        cout << "error";
        return 1;
    }

    cout << fixed << setprecision(2) << commissionPercent * sales;

    return 0;
}
