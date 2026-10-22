#include <iostream>
#include <iomanip>
using namespace std;

class SmartCard {
private:
    long long balance; // paise

public:
    SmartCard(long long b) {
        balance = b;
    }

    bool canTravel(long long fare) {
        return (balance - fare) >= 5000;
    }

    void deduct(long long fare) {
        if (canTravel(fare)) {
            balance -= fare;
            cout << "Journey Allowed" << endl;
            cout << "Remaining Balance: Rs "
                 << fixed << setprecision(2)
                 << balance / 100.0 << endl;
        } else {
            cout << "Journey Denied (Minimum Rs 50 must remain)" << endl;
            cout << "Balance: Rs "
                 << fixed << setprecision(2)
                 << balance / 100.0 << endl;
        }
    }
};

int main() {
    long long balance;
    int zone;
    int peak;

    cout << "Enter card balance in paise: ";
    cin >> balance;

    cout << "Enter zone (1=Inner, 2=Middle, 3=Outer): ";
    cin >> zone;

    cout << "Peak hour? (1=Yes, 0=No): ";
    cin >> peak;

    long long fare = 0;

    switch(zone) {
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
            cout << "Invalid Zone" << endl;
            return 0;
    }

    if (peak == 1) {
        fare = fare + (fare * 20 / 100);
    }

    cout << "Fare: Rs "
         << fixed << setprecision(2)
         << fare / 100.0 << endl;

    SmartCard card(balance);
    card.deduct(fare);

    return 0;
}