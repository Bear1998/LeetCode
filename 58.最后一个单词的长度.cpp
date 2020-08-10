/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int num = 0;
        for(int i = len-1;i>=0;i--){
            if(s[i] != ' '){
                num++;
            }else if(s[i] == ' ' && num){
                break;
            }
        }
        return num;
    }
};
// @lc code=end

