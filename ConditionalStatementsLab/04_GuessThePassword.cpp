#include <iostream>

using namespace std;

int main() {
    const string REAL_PASSWORD = "s3cr3t!P@ssw0rd";

    string inputPassword;
    cin >> inputPassword;

    if (inputPassword == REAL_PASSWORD) {
        cout << "Welcome";
    } else {
        cout << "Wrong password!";
    }
}
