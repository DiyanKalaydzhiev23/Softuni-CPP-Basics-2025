#include <iostream>

using namespace std;

int main() {
    string destination;
    double excursionPrice, money, savedMoney;

    while (cin >> destination && destination != "End") {
        cin >> excursionPrice;
        savedMoney = 0;

        while (savedMoney < excursionPrice) {
            cin >> money;
            savedMoney += money;
        }

        cout << "Going to " << destination << "!" << endl;
    }


    return 0;
}
