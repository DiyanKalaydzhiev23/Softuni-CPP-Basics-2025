#include <iostream>
#include <iomanip>

using namespace std;

int main() { // can be done with map
    const double MAX_SCORE = 20;

    string country, discipline;
    cin >> country >> discipline;

    double difficulty = 0, performance = 0;

    if (country == "Bulgaria") {
        if (discipline == "ribbon") {
            difficulty = 9.6;
            performance = 9.4;
        } else if (discipline == "hoop") {
            difficulty = 9.55;
            performance = 9.75;
        } else if (discipline == "rope") {
            difficulty = 9.5;
            performance = 9.4;
        }
    } else if (country == "Russia") {
        if (discipline == "ribbon") {
            difficulty = 9.1;
            performance = 9.4;
        } else if (discipline == "hoop") {
            difficulty = 9.3;
            performance = 9.8;
        } else if (discipline == "rope") {
            difficulty = 9.6;
            performance = 9.0;
        }
    } else if (country == "Italy") {
        if (discipline == "ribbon") {
            difficulty = 9.2;
            performance = 9.5;
        } else if (discipline == "hoop") {
            difficulty = 9.45;
            performance = 9.35;
        } else if (discipline == "rope") {
            difficulty = 9.7;
            performance = 9.15;
        }
    }

    double totalScore = difficulty + performance;
    double percentLeft = (MAX_SCORE - totalScore) / MAX_SCORE * 100;

    cout << fixed << setprecision(3);
    cout << "The team of " << country << " get " << totalScore << " on " << discipline << "." << endl;
    cout << fixed << setprecision(2);
    cout << percentLeft << "%" << endl;

    return 0;
}
