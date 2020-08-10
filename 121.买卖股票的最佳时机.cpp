/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 * 
 * 思路：记录最小值，向后面找比它大的，计算差值，迭代插值。
 * 若遇到更小的，更新最小值，继续向后走，计算差值，更新差值。
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int res = 0;
        int pre = prices[0];
        for(int i = 1;i<prices.size();i++){
            if(prices[i] < pre){
                pre = prices[i];
            }
            int current = prices[i] - pre;
            if(current > res){
                res = current;
            }
        }
        return res;
    }
};
// @lc code=end

