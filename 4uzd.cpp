#include <iostream>
using namespace std;

int main() {
    int x; // Jonas
    int y; // Petras


    cout << "Iveskite Jono surinktus taskus: ";
    cin >> x;
    cout << "Iveskite Petro surinktus taskus: ";
    cin >> y;


    if (x > y) {
        cout << "Jonas surinko daugiau tasku nei Petras";
    } else if (x < y) {
        cout << "Petras surinko daugiau tasku, nei Jonas";
    } else {
        cout << "Jonas ir Petras surinko vienoda tasku skaiciu";
    }

    return 0;
}

