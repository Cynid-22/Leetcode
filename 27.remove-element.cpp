/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

#include <vector>
#include <iostream>

using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i;
        for (i = 0; i < nums.size(); i++){
            if (nums[i] == val) {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return i;
    }
};
// @lc code=end

