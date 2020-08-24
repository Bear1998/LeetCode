/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n < 4)
            return n;
        else{
            int num1 = 2;
            int num2 = 3;
            for(int i = 3;i < n; i++){
                int num = num1 + num2;
                num1 = num2;
                num2 = num;
            }
            return num2;
        }
    }
};
// @lc code=end

