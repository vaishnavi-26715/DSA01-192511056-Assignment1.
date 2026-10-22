
#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    int n;
    double fare;
    long long farePaise;

    cout << "Enter fare in rupees: ";
    cin >> fare;

    if (cin.fail() || fare <= 0) {
        cout << "Invalid fare." << endl;
        return 0;
    }

    farePaise = static_cast<long long>(fare * 100 + 0.5);

    cout << "Enter number of journeys: ";
    cin >> n;

    if (cin.fail() || n <= 0) {
        cout << "Invalid number of journeys." << endl;
        return 0;
    }

    long long totalPaise = farePaise * n;
    double totalDouble = fare * n;

    cout << fixed << setprecision(2);
    cout << "\n--- Fare Comparison ---" << endl;
    cout << "Journeys: " << n << endl;
    cout << "Integer paise total: " << totalPaise << " paise" << endl;
    cout << "Integer total: Rs " << totalPaise / 100.0 << endl;
    cout << "Double total: Rs " << totalDouble << endl;

    if (totalPaise / 100 > INT_MAX) {
        cout << "Int total: Overflow would occur" << endl;
    } else {
        cout << "Int can store the total in paise only if it is <= "
             << INT_MAX << endl;
    }

    return 0;
}
