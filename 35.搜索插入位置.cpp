/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0)
            return 0;
        for(int i =0;i<len;i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return len;
    }
};
// @lc code=end

