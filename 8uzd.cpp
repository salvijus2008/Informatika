#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Ivesk staciakampio krastiniu ilgius: ";
    cin >> a >> b >> c >> d;

    if ((a == c && b + d <= a) || (b == d && a + c <= b))
        cout << "Kurmiui zemes sklypo ribas pazymeti pavyks" << endl;
    else
        cout << "Kurmiui zemes sklypo ribu pazymeti nepavyks" << endl;

    return 0;
}

