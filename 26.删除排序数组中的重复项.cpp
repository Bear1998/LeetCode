/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        int len = nums.size();
        if(len == 0)
            return 0;
        for(int i = 1;i<len;i++){
            if(nums[i] > nums[cnt]){
                cnt ++;
                nums[cnt] = nums[i];
            }
        }
        return cnt+1;
    }
};
// @lc code=end

