#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, b, s;
    cin >> n >> b >> s;
    
    // Convert s into base 10.
    int ns {};
    for (int i {}; s > 0; ++i) {
        ns += (s % 10) * pow(b, i);
        s /= 10;
    }
    s = ns;

    int ans {};

    // Count the occurences of the largest digit.
    for (int i {}; i < n; ++i) {

        int num {s};

        while (num > 0) {
            if (num % b == b - 1) {
                ++ans;
            }
            num /= b;
        }

        ++s;
    }

    cout << ans << '\n';

    return 0;
}
