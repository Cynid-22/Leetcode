/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        long long length = 0, temp = x, a = 0;
        while (temp>0) {
            length++;
            temp /= 10;
        }
        temp = x;
        for (int i = 0; i < length; ++i) {
            a += (temp%10)*pow(10, length-i-1);
            temp /= 10;
        }

        if (a == x)
            return true;
        else
            return false;
    }
};
// @lc code=end

