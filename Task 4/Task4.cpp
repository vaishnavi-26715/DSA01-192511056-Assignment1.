
#include <iostream>
using namespace std;

int main() {
    int a, b;
    double x;
    char ch;

    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter another integer: ";
    cin >> b;

    cout << "Enter a decimal number: ";
    cin >> x;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "\n--- Output ---" << endl;

    double result = a / b;
    cout << "Integer division stored in double: " << result << endl;

    double result2 = static_cast<double>(a) / b;
    cout << "Type-cast division: " << result2 << endl;

    int converted = x;
    cout << "Double converted to int: " << converted << endl;

    int charValue = ch;
    cout << "Character converted to integer: " << charValue << endl;

    return 0;
}
