
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "\n--- Operator Precedence ---" << endl;

    cout << "a + b * c = " << a + b * c << endl;
    cout << "(a + b) * c = " << (a + b) * c << endl;
    cout << "a / b + c = " << a / b + c << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "(a > b) && (b > c) = "
         << ((a > b) && (b > c)) << endl;

    return 0;
}
