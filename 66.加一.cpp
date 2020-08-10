/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        digits[len - 1] = digits[len - 1] + 1;
        for(int i= len - 1;i > 0;i--){
            digits[i -1] = digits[i -1] + digits[i] / 10;
            digits[i] = digits[i] % 10;
        }
        if(len > 1){
            digits[1] = digits[1] %10;
            digits[0] = digits[0] + digits[1] / 10;
        }
        if(digits[0] >= 10){
            vector<int> result;
            result.push_back(1);
            result.push_back(digits[0] % 10);
             for(int i= 1;i < len;i++){
                 result.push_back(digits[i]);
            }
            return result;
        }else{
            return digits;
        }
    }
};
// @lc code=end

