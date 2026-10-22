
#include <iostream>
using namespace std;

class SmartCard {
private:
    int balance;

public:
    SmartCard(int b) {
        balance = b;
    }

    bool canTravel(int fare) {
        return balance - fare >= 5000;
    }

    void deductFare(int fare) {
        if (canTravel(fare)) {
            balance -= fare;
            cout << "Journey allowed" << endl;
        } else {
            cout << "Journey denied" << endl;
        }
    }

    void showBalance() {
        cout << "Balance: Rs " << balance / 100.0 << endl;
    }
};

int main() {
    int balance, fare;

    cout << "Enter card balance in paise: ";
    cin >> balance;

    cout << "Enter fare in paise: ";
    cin >> fare;

    SmartCard card(balance);
    card.deductFare(fare);
    card.showBalance();

    return 0;
}
