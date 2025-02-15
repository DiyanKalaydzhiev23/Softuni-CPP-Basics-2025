#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (!(number >= 100 && number <= 200 || number == 0)) {
        cout << "invalid";
    }

    return 0;
}
