
#include <iostream>
using namespace std;

enum class Zone {
    Inner = 1, Middle, Outer, Airport
};

class FareTable {
public:
    static long long getFare(Zone zone, bool weekend, bool peak) {
        long long fare;

        switch (zone) {
            case Zone::Inner:   fare = 1000; break;
            case Zone::Middle:  fare = 2000; break;
            case Zone::Outer:   fare = 3000; break;
            case Zone::Airport: fare = 6000; break;
            default: return -1;
        }

        if (weekend)
            fare = fare * 90 / 100;
        else if (peak)
            fare = fare * 120 / 100;

        return fare;
    }
};

class MonthlyPass {
private:
    Zone zone1, zone2;

public:
    MonthlyPass(Zone z1, Zone z2) : zone1(z1), zone2(z2) {}

    bool covers(Zone zone) const {
        return zone == zone1 || zone == zone2;
    }
};

class SmartCard {
private:
    long long balance;
    static constexpr long long MIN_BALANCE = 5000;

public:
    SmartCard(long long amount) : balance(amount) {}

    void travel(Zone zone, bool weekend, bool peak,
                const MonthlyPass& pass) {
        if (pass.covers(zone)) {
            cout << "Monthly pass used. No fare deducted.\n";
            displayBalance();
            return;
        }

        long long fare = FareTable::getFare(zone, weekend, peak);

        if (fare < 0) {
            cout << "Invalid zone.\n";
            return;
        }

        if (balance - fare >= MIN_BALANCE) {
            balance -= fare;
            cout << "Journey allowed.\n";
            cout << "Fare: Rs " << fare / 100 << ".";
            if (fare % 100 < 10) cout << "0";
            cout << fare % 100 << "\n";
        } else {
            cout << "Journey denied. Minimum Rs 50 must remain.\n";
        }

        displayBalance();
    }

    void displayBalance() const {
        cout << "Remaining balance: Rs "
             << balance / 100 << ".";
        if (balance % 100 < 10) cout << "0";
        cout << balance % 100 << "\n";
    }
};

int main() {
    long long balance;
    int pass1, pass2, zoneInput, weekend, peak;

    cout << "Enter card balance in rupees: ";
    if (!(cin >> balance) || balance < 0) {
        cout << "Invalid balance.\n";
        return 0;
    }

    cout << "Zones: 1=Inner, 2=Middle, 3=Outer, 4=Airport\n";

    cout << "Enter first monthly-pass zone (1-4): ";
    cin >> pass1;

    cout << "Enter second monthly-pass zone (1-4): ";
    cin >> pass2;

    if (cin.fail() || pass1 < 1 || pass1 > 4 ||
        pass2 < 1 || pass2 > 4 || pass1 == pass2) {
        cout << "Invalid monthly-pass zones.\n";
        return 0;
    }

    cout << "Enter journey zone (1-4): ";
    cin >> zoneInput;

    cout << "Weekend? (1=Yes, 0=No): ";
    cin >> weekend;

    cout << "Peak hour? (1=Yes, 0=No): ";
    cin >> peak;

    if (cin.fail() || zoneInput < 1 || zoneInput > 4 ||
        (weekend != 0 && weekend != 1) ||
        (peak != 0 && peak != 1)) {
        cout << "Invalid input.\n";
        return 0;
    }

    SmartCard card(balance * 100);
    MonthlyPass pass(static_cast<Zone>(pass1),
                     static_cast<Zone>(pass2));

    card.travel(static_cast<Zone>(zoneInput),
                weekend == 1, peak == 1, pass);

    return 0;
}
