
#include <iostream>
using namespace std;

enum class Zone {
    Inner,
    Middle,
    Outer
};

constexpr int INNER_FARE = 1000;
constexpr int MIDDLE_FARE = 2000;
constexpr int OUTER_FARE = 3000;
constexpr int PEAK_SURCHARGE_PERCENT = 20;
constexpr int MIN_BALANCE_PAISE = 5000;

int main() {
    int zone;

    cout << "Metro Zones:" << endl;
    cout << "1. Inner - Rs 10" << endl;
    cout << "2. Middle - Rs 20" << endl;
    cout << "3. Outer - Rs 30" << endl;

    cout << "Enter zone number: ";
    cin >> zone;

    switch (zone) {
        case 1:
            cout << "Base fare: Rs " << INNER_FARE / 100 << endl;
            break;
        case 2:
            cout << "Base fare: Rs " << MIDDLE_FARE / 100 << endl;
            break;
        case 3:
            cout << "Base fare: Rs " << OUTER_FARE / 100 << endl;
            break;
        default:
            cout << "Invalid zone" << endl;
    }

    cout << "Peak surcharge: "
         << PEAK_SURCHARGE_PERCENT << "%" << endl;
    cout << "Minimum remaining balance: Rs "
         << MIN_BALANCE_PAISE / 100 << endl;

    return 0;
}
