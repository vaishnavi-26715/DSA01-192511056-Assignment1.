
#include <iostream>
using namespace std;

const long long MIN_BALANCE_PAISE = 5000;

bool canTravel(long long balance, long long fare) {
    return balance - fare >= MIN_BALANCE_PAISE;
}

void deductFare(long long &balance, long long fare) {
    if (canTravel(balance, fare)) {
        balance -= fare;
        cout << "Journey allowed." << endl;
    } else {
        cout << "Journey denied (low balance)." << endl;
    }
}

int main() {
    long long balance, fare;

    cout << "Enter card balance in paise: ";
    cin >> balance;

    cout << "Enter fare in paise: ";
    cin >> fare;

    deductFare(balance, fare);

    cout << "Remaining balance in paise: "
         << balance << endl;

    return 0;
}
