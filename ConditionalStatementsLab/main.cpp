#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string shape;
    cin >> shape;

    double result;

    if (shape == "square") {
        double a;
        cin >> a;
        result = a * a;
    } else if (shape == "rectangle") {
        double a, b;
        cin >> a >> b;
        result = a * b;
    } else if (shape == "circle") {
        double radius;
        cin >> radius;
        result = M_PI * pow(radius, 2);
    } else if (shape == "triangle") {
        double a, ha;
        cin >> a >> ha;
        result = a * ha / 2;
    }

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << result;
}
