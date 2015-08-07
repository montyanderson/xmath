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

    bool isPalindrome(int in) {
        int num = in, out = 0;

        while(num != 0) {
            out *= 10;
            out += num % 10;
            num /= 10;
        }

        if(in == out)
            return true;

        return false;
    }
}
