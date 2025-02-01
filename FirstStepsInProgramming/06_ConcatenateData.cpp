#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    string firstName;
    string lastName;
    int age;
    string city;

    cin >> firstName >> lastName >> age >> city;
    cout
            << "You are " << firstName << " " << lastName
            << ", a " << age << "-years old person from " << city << "."
            << endl;

    // firstName - camelCase - This is used in c++
    // FirstName - PascalCase
    // first_name - snake_case

    return 0;
}