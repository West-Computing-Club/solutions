# Club Fair
Problems from the club fair.
## Exposition
### Problem 1
This problem can be solved in O(n^2) / quadratic time by iterating through the array, and for each value, iterating through the array again looking for another integer such that the two sum to 11.  
Better, it is possible to solve this problem in O(n) / linear time by using a boolean array, hashset, or hashmap to indicate which values are present in the array by value lookup. Iterate through the array once and check the hashmap for the unique value such that, when summed with the integer from the iteration, the result is 11.
### Problem 2
It is common to use addition / subtraction or the XOR operator for this purpose.
#### Addition / Subtraction
```
a := 5
b := 8

a := a + b     a = 13
b := a - b     b = 5
a := a - b     a = 8
```
#### XOR
```
a := 5         a = 0101
b := 8         b = 1000

a := a ⊕ b    a = 1101
b := a ⊕ b    b = 0101 = 5
a := a ⊕ b    a = 1000 = 8
```
