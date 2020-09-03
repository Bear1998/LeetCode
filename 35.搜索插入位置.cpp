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
        //手写二分
        // int left = 0;
        // int right = len;
        // int mid = (left + right)/2;
        // while(left <= right){
        //     if(mid == len)
        //         return len;
        //     if(nums[mid] < target)
        //         left = mid + 1;
        //     else
        //         right = mid - 1;
        //     mid = (left + right ) / 2;
        // }
        // if(nums[mid] >= target)
        //     return mid;
        // else
        //     return mid + 1;


        int pos = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return pos;
    }
};
// @lc code=end

