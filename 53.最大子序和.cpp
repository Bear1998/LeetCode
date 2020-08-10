/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int star = 0,sum = 0;
        int st,ed;
        int ans = -2147483647;
        for(int i = 0;i<len;i++){
            sum += nums[i];
            if(sum > ans){
                ans = sum;
                st = star;
                ed = i;
            }
            if(sum < 0){
                sum = 0;
                star = i + 1;
            }
        }
        return ans;
    }
};
// @lc code=end

