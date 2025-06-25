/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int max = nums.size(), min = 0, pointer = (max+min)/2;

        while (nums[pointer] != target) {
            if (nums[pointer] > target) {
                max = pointer;
                pointer = (max+min)/2;
            }
            if (nums[pointer] < target) {
                min = pointer + 1;
                pointer = (max+min)/2;
            }
            if (max == min)
                return min;
        }
        return pointer;
    }
};
// @lc code=end

