/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        else if(x == 1)
            return 1;
        int left = 1;
        int right = x/2+1;
        int mid = (left + right)>>1;
        while(left <= right){
            if(x / mid >= mid){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
            mid = (left + right) >> 1;
        }
        return mid;
    }
};
// @lc code=end

