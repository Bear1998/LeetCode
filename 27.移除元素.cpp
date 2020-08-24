/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        if(len == 0)
            return 0;
        int j = len - 1;
        int i;
        for(i = 0;i<len;i++){
            if(nums[i] == val){
                while(j != i && nums[j] == val){
                    j--;
                }
                if(j == i){
                    break;
                }
                // int temp = nums[i];
                // nums[i] = nums[j];
                // nums[j] = temp;
                swap(nums[i], nums[j]);
            }
        }
        return i;
    }
};
// @lc code=end

