#include <iostream>

using namespace std;

int main() {
    // Using the XOR approach.
    int a = 5, b = 8;
    cout << "a: " << a << ' ' << "b: " << b << '\n';
    a = a ^ b; // The carat "^" is not an exponent, it is the XOR operator.
    b = a ^ b;
    a = a ^ b;
    cout << "a: " << a << ' ' << "b: " << b << '\n';

    // Outputs:
    // a: 5 b: 8
    // a: 8 b: 5

    return 0;
}
