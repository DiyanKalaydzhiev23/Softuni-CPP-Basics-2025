#include <iostream>

using namespace std;

int main() {
    string typeAnimal;
    cin >> typeAnimal;

    if (typeAnimal == "crocodile" || typeAnimal == "tortoise" || typeAnimal == "snake") {
        cout << "reptile";
    } else if (typeAnimal == "dog") {
        cout << "mammal";
    } else {
        cout << "unknown";
    }

    return 0;
}
