# xmath

C++ library for Maths functions, created after solving a number of [Project Euler Problems](https://github.com/montyanderson/euler).

**Note: Although this library is completely functional, it was made primarily as
an educational project. I did spend some time on speed, but this library is - by no means - the fastest.**

## Example

``` c++
#include <iostream>
#include "xmath.hpp"

using namespace std;

int main() {
    cout << "List the prime numbers below 20:" << endl;

    for(int i = 1; i < 20; i++) {
        if(xmath::isPrime(i) == true)
            cout << i << endl;
    }

    cout << "List the palindromes above 100 and below 200:" << endl;

    for(int i = 100; i < 200; i++) {
        if(xmath::isPalindrome(i) == true)
            cout << i << endl;
    }
}
```

## Functions

### bool xmath::isPrime(int number)

Returns TRUE or FALSE, depending if the number is a prime number or not.

### bool xmath::isPalindrome(int number)

Returns TRUE or FALSE, depending if the number is a Palindrome or not.

### int xmath::reverse(int number)

Returns the number reversed: 1234 -> 4321.

### int xmath::collatz(int number)

Returns the amount of terms in the Collatz sequence: 13 -> 10.
