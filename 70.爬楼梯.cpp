/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        vector<int > vector_num;
        vector_num.push_back(1);
        vector_num.push_back(2);
        vector_num.push_back(3);

        for(int i = 3;i < n; i++){
            vector_num.push_back(vector_num[i-2] + vector_num[i-1]);
        }
        return vector_num[n-1];

    }
};
// @lc code=end

