#include <iostream>

using namespace std;

int main() {
    double balance = 0;
    string deposit;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (cin >> deposit && deposit != "NoMoreMoney") {
        double depositNumber = stod(deposit); // "100" -> stod("100") -> 100.00

        if (depositNumber < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }

        balance += depositNumber;
        cout << "Increase: " << depositNumber << endl;
    }

    cout << "Total: " << balance << endl;

    return 0;
}
