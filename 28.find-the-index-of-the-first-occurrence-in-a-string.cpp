/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

#include <string>
#include <iostream>

using namespace std;
// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length()) return -1;
        for (int i = 0; i < haystack.length()-needle.length()+1; i++) {
            int j = 0;
            while (j < needle.length() && haystack[i+j] == needle[j]) {
                j++;
                if (j == needle.length())
                    return i;
            }
        }
        return -1;
    }
};
// @lc code=end

