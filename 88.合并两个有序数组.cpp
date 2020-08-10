/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    //     int j=0;
    //     bool flag = true;
    //     for(int i = 0;i<n;i++){
    //         int num_2 = nums2[i];
    //         if(flag){
    //             for(;j< m;j++){
    //                 int num_1 = nums1[j];
    //                 if(num_1>num_2){
    //                     nums1.insert(nums1.begin() + j,num_2);
    //                     m += 1;
    //                     j++;
    //                     if(j == m-1)
    //                         flag = false;
    //                     break;
    //                 }
    //             }
    //         }
    //         else{
    //             nums1.insert(nums1.begin() + m,num_2);
    //             m++;
    //         }
    //     }
        vector<int> nums3;
        int cnt = 0;
        int i=0;
        int j=0;
        while(cnt <(n+m)){
            int num_1;
            int num_2;
            int num_3;
            if(i<n && j<m)
            {
                num_1 = nums1[i];
                num_2 = nums2[j];
                 if(num_1>=num_2){
                    num_3 = num_2;
                    j++;
                 }else{
                    num_3 = num_1;
                    i++;
                }
            }else if(i == n && j<m){
                num_3 = nums2[j];
                j++;
            }else if(j == m && i< n){
                cout<<i;
                num_3 = nums1[i];
                i++;
            }
            nums3.push_back(num_3);
            cnt++;
        }
        nums1 = nums3;
    }
};
// @lc code=end

