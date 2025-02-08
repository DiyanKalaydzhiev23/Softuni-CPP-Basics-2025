#include <iostream>

using namespace std;

int main() {
    const double EXCELLENT_GRADE_MIN = 5.50;

    double grade;
    cin >> grade;

    if (grade >= EXCELLENT_GRADE_MIN) {
        cout << "Excellent!";
    }
}
