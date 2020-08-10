/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int sum = 0;
        for(int i = 0;i<len;i++){
            switch (s[i])
            {
            case 'C':
                if(i+1 <= len ){
                    if(s[i+1] == 'D'){
                        sum += 400;
                        i++;
                    }else if(s[i+1] == 'M'){
                        sum += 900;
                        i++;
                    }else{
                        sum += 100;
                    }
                }
                break;
            case 'X':
                if(i+1 <= len ){
                    if(s[i+1] == 'L'){
                        sum += 40;
                        i++;
                    }else if(s[i+1] == 'C'){
                        sum += 90;
                        i++;
                    }else{
                        sum += 10;
                    }
                }
                break;
            case 'I':
                if(i+1 <= len ){
                    if(s[i+1] == 'V'){
                        sum += 4;
                        i++;
                    }else if(s[i+1] == 'X'){
                        sum += 9;
                        i++;
                    }else{
                        sum += 1;
                    }
                }
                break;
            case 'M':
                sum += 1000;
                break;
            case 'D':
                sum += 500;
                break;
            case 'L':
                sum += 50;
                break;
            case 'V':
                sum += 5;
                break;
            default:
                break;
            }
        }
        return sum;
    }
};
// @lc code=end

