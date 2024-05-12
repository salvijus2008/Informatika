#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Iveskite trizenkli skaiciu: ";
    cin >> n;

    int skaicius = n;
    int suma = 0;

    while (skaicius != 0) {
        int skaitmuo = skaicius % 10;
        suma += skaitmuo * skaitmuo * skaitmuo;
        skaicius /= 10;
    }

    if (suma == n)
        cout << n << " yra Armstrongo skaicius." << endl;
    else
        cout << n << " nera Armstrongo skaicius." << endl;

    return 0;
}

