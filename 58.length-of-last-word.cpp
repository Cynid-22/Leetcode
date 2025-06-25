/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
#include <string>

using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=1;

        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != ' ') {
                length++;
                if (s[i-1] == ' ')
                    length = 1;
            }
        }
        return length;
    }
};
// @lc code=end

