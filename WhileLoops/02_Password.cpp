#include <iostream>

using namespace std;

int main() {
    string username, password, currentPasswordAttempt;
    cin >> username >> password;

    // Option 1
//    while (cin >> currentPasswordAttempt && currentPasswordAttempt != password);

    // Option 2
    while (currentPasswordAttempt != password) {
        cin >> currentPasswordAttempt;
    }

    cout << "Welcome " << username << "!" << endl;

    return 0;
}
