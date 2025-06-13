/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <string>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        char temp = strs[0][0];
        if (temp == '\n')
            return "There is no common prefix among the input strings.";
        for (int i = 0; i < strs.at(0).length(); ++i) {
            temp = strs[0][i];
            for (int j = 0; j < strs.size(); ++j)
                if (strs[j][i] != temp)
                    return prefix;
            prefix += temp;
        }
        return prefix;
    }
};
// @lc code=end

