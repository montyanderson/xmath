# xmath

C++ library for Maths functions.

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

Will return TRUE or FALSE, depending if the number is a prime number or not.

### bool xmath::isPalindrome(int number)

Will return TRUE or FALSE, depending if the number is a Palindrome or not.
