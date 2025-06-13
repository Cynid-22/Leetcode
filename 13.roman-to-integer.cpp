/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int value = 0;
        string str = "O" + s;
        for (int i = str.length()-1; i > 0; --i) {
            if (str[i] == 'D') {
                if (str[i-1] == 'C') {
                    value += 400;
                    i--;
                }
                else
                    value += 500;
            }
            else if (str[i] == 'M') {
                if (str[i-1] == 'C') {
                    value += 900;
                    i--;
                }
                else
                    value += 1000;
            }
            else if (str[i] == 'L') {
                if (str[i-1] == 'X') {
                    value += 40;
                    i--;
                }
                else
                    value += 50;
            }
            else if (str[i] == 'C') {
                if (str[i-1] == 'X') {
                    value += 90;
                    i--;
                }
                else
                    value += 100;
            }
            else if (str[i] == 'V') {
                if (str[i-1] == 'I') {
                    value += 4;
                    i--;
                }
                else
                    value += 5;
            }
            else if (str[i] == 'X') {
                if (str[i-1] == 'I') {
                    value += 9;
                    i--;
                }
                else
                    value +=10;
            }
            else value += 1;
        }
        return value;
    }
};
// @lc code=end

