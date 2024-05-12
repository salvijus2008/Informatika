#include <iostream>
#include <iomanip>

using namespace std;


const double KELVIN_OFFSET = 273.16;
const double REOMUR_FACTOR = 0.8;

int main() {
    double kelvinai;
    cout << "iveskite temperatura kelvino skaleje: ";
    cin >> kelvinai;


    double celsijai = kelvinai - KELVIN_OFFSET;

    double farenheitai = celsijai * 9 / 5 + 32;


    double reomurai = celsijai * REOMUR_FACTOR;

    cout << fixed << setprecision(2);
    cout << celsijai << " Celsijaus laipsniu" << endl;
    cout << farenheitai << " Farenheito laipsniu" << endl;
    cout << reomurai << " Reomiuro laipsniu" << endl;

    return 0;
}
