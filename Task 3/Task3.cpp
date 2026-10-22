
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int balancePaise, farePaise;
    double fareRupees;
    bool peakHour;
    char zone;
    long long journeys;

    cout << "Enter balance in paise: ";
    cin >> balancePaise;

    cout << "Enter fare in paise: ";
    cin >> farePaise;

    cout << "Enter fare in rupees: ";
    cin >> fareRupees;

    cout << "Enter peak hour (1 for Yes, 0 for No): ";
    cin >> peakHour;

    cout << "Enter zone (A/B/C): ";
    cin >> zone;

    cout << "Enter number of journeys: ";
    cin >> journeys;

    cout << "\n--- Entered Details ---\n";
    cout << "Balance in paise: " << balancePaise << endl;
    cout << "Fare in paise: " << farePaise << endl;
    cout << "Fare in rupees: " << fareRupees << endl;
    cout << "Peak hour: " << peakHour << endl;
    cout << "Zone: " << zone << endl;
    cout << "Journeys: " << journeys << endl;

    cout << "\n--- Data Type Sizes ---\n";
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "char: " << sizeof(char) << " byte" << endl;

    cout << "\nMaximum int: " << INT_MAX << endl;

    int a, b;
    cout << "\nEnter two integers for division: ";
    cin >> a >> b;

    if (b != 0) {
        double result = static_cast<double>(a) / b;
        cout << "Division result: " << result << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
