#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string movieName;
    getline(cin, movieName);

    int days, tickets;
    cin >> days >> tickets;

    double ticketPrice, percentageForCinema; // 0 - 100 => 7 => 0.07
    cin >> ticketPrice >> percentageForCinema;

    double profitBeforeTax = days * tickets * ticketPrice;
    double cinemaTax = (percentageForCinema / 100) * profitBeforeTax;
    double profitAfterTax = profitBeforeTax - cinemaTax;

    cout << fixed << setprecision(2) << "The profit from the movie " << movieName << " is " << profitAfterTax << " lv.";

    return 0;
}
