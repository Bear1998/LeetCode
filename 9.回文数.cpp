/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long long ans = 0;
        long long fir = x;
        while(x){
            int t = x % 10;
            ans = ans * 10 + t;
            x= x/10;
        }
        if(fir == ans)
            return true;
        else
            return false;
    }
};
// @lc code=end

