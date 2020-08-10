/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        if(len2 == 0 )
            return 0;
        else if(len1 <len2)
            return -1;
        int i;
        bool flag = false;
        for(i =0 ;i<len1;i++){
            if(len1 - i < len2)
                break;
            for(int j = 0;j<len2;j++){
                if(haystack[i] != needle[j]){
                    break;
                }
                while(haystack[i] == needle[j]){
                    i++;
                    j++;
                    if(j == len2){
                        return i-j;
                    }
                }
                i = i - j;
                break;
            }
        }
        return -1;
    }
};
// @lc code=end

