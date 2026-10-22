
#include <iostream>
using namespace std;

int main() {
    int zone, isPeak;
    int fare = 0;

    cout << "Select zone (1, 2, or 3): ";
    cin >> zone;

    cout << "Is it peak hour? (1 = Yes, 0 = No): ";
    cin >> isPeak;

    switch (zone) {
        case 1:
            fare = 1000;
            break;
        case 2:
            fare = 2000;
            break;
        case 3:
            fare = 3000;
            break;
        default:
            cout << "Invalid zone!" << endl;
            return 0;
    }

    if (isPeak == 1) {
        fare = fare + 500;
    } else if (isPeak != 0) {
        cout << "Invalid peak-hour input!" << endl;
        return 0;
    }

    cout << "Final fare: " << fare << " paise" << endl;
    cout << "Final fare: Rs. " << fare / 100.0 << endl;

    return 0;
}
