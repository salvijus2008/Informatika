#include <iostream>

using namespace std;

int main() {
    int hours, minutes, seconds;


    cout << "Iveskite valandas: ";
    cin >> hours;
    cout << "Iveskite minutes: ";
    cin >> minutes;
    cout << "Iveskite sekundes: ";
    cin >> seconds;


    int totalSeconds = hours * 3600 + minutes * 60 + seconds;


    totalSeconds--;


    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;


    cout << "Laikrodis rode " << hours << " val " << minutes << " min " << seconds << " sek pries sekunde." << endl;

    return 0;
}

