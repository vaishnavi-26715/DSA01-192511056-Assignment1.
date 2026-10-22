
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    long long balance, fare;

    cout << "Enter card balance in paise: ";

    while (!(cin >> balance) || balance < 0) {
        cout << "Invalid balance. Enter a non-negative number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter fare in paise: ";

    while (!(cin >> fare) || fare < 0) {
        cout << "Invalid fare. Enter a non-negative number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << fixed << setprecision(2);

    cout << "\n--- Journey Report ---\n";
    cout << "Initial balance: Rs "
         << balance / 100.0 << endl;
    cout << "Fare: Rs " << fare / 100.0 << endl;

    if (balance - fare >= 5000) {
        balance -= fare;
        cout << "Journey status: Allowed" << endl;
    } else {
        cout << "Journey status: Denied (minimum balance rule)" << endl;
    }

    cout << "Remaining balance: Rs "
         << balance / 100.0 << endl;

    return 0;
}
