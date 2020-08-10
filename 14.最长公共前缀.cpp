/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if(len == 0)
            return "";
        else if(len == 1)
            return strs[0];
        int flag = true;
        int num = 0;
        string str1 = strs[0];
        if(str1.length() == 0)
            return "";
        while(flag){
            for(int j = 1;j<len;j++){
                string str2 = strs[j];
                if(str2.length() == num){
                    flag = false;
                    break;
                }
                if(str1[num] != str2[num]){
                    flag = false;
                    break;
                }
            }
            if(flag)
                num++;
        }
        string result;
        for(int i= 0;i< num;i++){
            result += str1[i];
        }
        return result;
    }
};
// @lc code=end

