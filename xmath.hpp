#include <cmath>

namespace xmath {
    bool isPrime(int num) {
        int root = (int) sqrt(num) + 1;

        if(num <= 1)
            return false;

        for(int i = 2; i < root; i++) {
            if(num % i == 0)
                return false;
        }

        return true;
    }

    int reverse(int num) {
        int out = 0;

        while(num != 0) {
            out *= 10;
            out += num % 10;
            num /= 10;
        }

        return out;
    }

    bool isPalindrome(int num) {
        return num == reverse(num);
    }

    int collatz(long int num) {
        int i;

        for(i = 1; num != 1; i++) {
            if(num % 2 == 0) {
                num /= 2;
            } else {
                num *= 3;
                num += 1;
            }
        }

        return i;
    }

    int power(long int num, long int p) {
        int out = 1;

        for(int i = 0; i < p; i++)
            out *= num;

        return out;
    }
}
