#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ivesk tris skaicius: ";
    cin >> a >> b >> c;

    int didziausias = max(a, max(b, c));
    int maziausias = min(a, min(b, c));

    cout << "Didziausias skaicius: " << didziausias << endl;
    cout << "Maziausias skaicius: " << maziausias << endl;

    return 0;
}

