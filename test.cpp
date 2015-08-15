#include <iostream>
#include <cstdlib>
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

    cout << "Reverse random numbers:" << endl;

    for(int i = 0; i < 10; i++) {
        int num = rand() % 900 + 100;

        cout << num << " - " << xmath::reverse(num) << endl;
    }

    cout << "List length of Collatz sequences:" << endl;

    for(int i = 13; i < 21; i++) {
        cout << i << " - " << xmath::collatz(i) << endl;
    }

    cout << "List powers of 2, 1 - 10:" << endl;

    for(int i = 1; i < 11; i++)
        cout << xmath::power(2, i) << endl;
}
