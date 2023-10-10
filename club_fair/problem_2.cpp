/*
*   Problem Statement: Swap two variables without ever introduction a third one.
*   Solution Code: Swap with sum or swap with xor.
*/

#include <iostream>

// Swap a, b, no third variables with addition.
// Use pass by reference to actually swap values.

void swapABwithSum(int &a, int &b) {
    a = a + b;  // a: a + b
    b = a - b;  // b: (a + b) - b = a
    a = a - b;  // a: (a + b) - a = b
}


// Swap a, b, no third variables using XOR (^).
// Use pass by reference to actually swap values.

void swapABwithXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}


// Driver Test Code
// Play around with the values a and b.

int main(void){
    int a = 0;
    int b = 1;
    std::cout << "Before Swap         | a: " <<  a << ", b: " << b << std::endl;
    
    
    // Demonstrate XOR swap
    swapABwithXOR(a, b);
    std::cout << "After Swap with XOR | a: " <<  a << ", b: " << b << std::endl;
    
    
    // Demonstrate Sum swap
    swapABwithSum(a, b);
    std::cout << "After Swap with Sum | a: " <<  a << ", b: " << b << std::endl;
}
