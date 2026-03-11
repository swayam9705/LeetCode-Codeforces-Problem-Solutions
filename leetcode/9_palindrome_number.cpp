#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int n = x, remain;
        long long rev = 0;

        while (n > 0) {
            remain = n % 10;
            rev = rev * 10 + remain;
            n /= 10;
        }

        return rev == x;
    }
};