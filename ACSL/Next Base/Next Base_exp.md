# Next Base Exposition
The problem asks to generate *n* numbers in base *b* incrementing by one from number *s*, and then to count the number of times the largest possible digit in the base is found among those numbers.  
Only the number of times the largest possible digit is found is output.  
Note that *s* is provided in base *b*.
## Exposition
### C++
Multiple steps are needed to complete this problem in C++:
1. Convert *s* into base 10.
    ```
    Example: 144 (base 8) to 100 (base 10).

    144 -->  1     4      4
             /     |       \
    (1 * 8^2) + (4 * 8^1) + (4 * 8^0) = 1 * 64 + 4 * 8 + 4 * 1
    = 64 + 32 + 4 = 64 + 36 = 100
    ```
2. Iterate *n* counts starting from the newly converted *s*.
3. For each number, count the number of occurences of the largest possible digit (*b - 1*) while generating the numbers in base *b*.
```
Pseudo-code algorithm for base conversion 10 --> b.

while number > 0:
    if number mod base == base - 1:
        occurence of largest digit
    number = number / base
```
### Python
A number of built-in functions can help accomplish this problem fairly similarly.
