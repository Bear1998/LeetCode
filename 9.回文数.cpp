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
        vector<char> vector_a;
        while(x){
            int t = x % 10;
            x= x/10;
            vector_a.push_back(t + '0');
        }
        int length = vector_a.size();
        for(int i = 0; i< length/2 ;i++){
            if(vector_a[i] != vector_a[length -1-i])
                return false;
        }
        return true;
    }
};
// @lc code=end

