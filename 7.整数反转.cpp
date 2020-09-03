/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start

class Solution {
public:
    int reverse(int x) {
        //第一次提交
        //2147483648
        // vector<char> vector_c;
        // if(x < 0){
        //     vector_c.push_back('-');
        //     if(x == -2147483648)
        //         x = 0;
        //     else
        //         x = -x;
        // }else if(x == 0){
        //     return 0;
        // }
        // while(x){
        //     char c = x%10 + '0';
        //     x = x / 10;
        //     vector_c.push_back(c);
        // }
        // int result = 0;
        // bool flag = false;
        // if(vector_c[0] == '-'){
        //     for(int i= 1;i<vector_c.size();i++){
        //         if(result != 0){
        //             double temp = -2147483648 /result;
        //             if(temp < 10){
        //                 result = 0;
        //                 break;
        //             }
        //         }
        //         char c = vector_c[i];
        //         int num = c - '0';
        //         result = result * 10 - num;
        //     }
        // }else{
        //     result = vector_c[0] - '0';
        //     for(int i= 1;i<vector_c.size();i++){
        //         if(result != 0){
        //             double temp = 2147483647 /result;
        //             if(temp < 10){
        //                 result = 0;
        //                 break;
        //             }
        //         }
        //         char c = vector_c[i];
        //         int num = c - '0';
        //         result = result * 10 + num;
        //     }
        // }
        // return result;

        if(x == -2147483648)
            return 0;
        bool is_neg = false;
        if(x < 0){
            is_neg = true;
            x = -x;
        }
        long long result = 0;
        while(x){
            int num = x % 10;
            x /= 10;
            result = result * 10 + num;
        }
        if(is_neg)
            result *= -1;
        if(result == int(result))
            return result;
        else
            return 0;
    }
};
// @lc code=end

