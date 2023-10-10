#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int values [] {10, 45, 32, 1, 5, 3, 7, 5, 2, 4, 9, 1, 4, 7, 3, 0};

    // Solution using boolean array.
    // Note: Only works if possible integer values are constrained to some known bound.
    bool flag [64] {};
    for (int value : values) {
        if (flag[11 - value]) {
            cout << "Value pair found: " << value << " + " << (11 - value) << " = 11\n";
            break;
        } else {
            flag[value] = true;
        }
    }

    // Solution using hashset.
    // Note: Unlike C++, Java may only have hashmaps available.
    unordered_set <int> flagSet {};
    for (int value : values) {
        if (flagSet.count(11 - value)) {
            cout << "Value pair found: " << value << " + " << (11 - value) << " = 11\n";
            break;
        } else {
            flagSet.emplace(value);
        }
    }

    // Both cases output: "Value pair found: 1 + 10 = 11"

    return 0;
}
