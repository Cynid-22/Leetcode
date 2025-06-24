/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

#include <vector>
#include <iostream>

using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i] == nums[i-1])
                nums.erase(nums.begin()+i);
        }
        for (int i = 0; i < nums.size(); ++i) {
            count++;
        }
        cout << count;
    }
};
// @lc code=end

