/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int size = nums.size();
        vector<pair<int,int>> arr(size);
        for(int i = 0;i< size;i++){
            arr[i] = make_pair(nums[i], i);
        }
        sort(arr.begin(), arr.end(), [](const pair<int, int> &a,const pair<int, int> &b){return a.first< b.first;});

        for(int i =0;i<size -1;i++){
            int pos = lower_bound(arr.begin() + i+1, arr.end(), target - arr[i].first, [](const pair<int,int> &a, const int &b){ return a.first < b; }) - arr.begin();
            if(pos != size && arr[pos].first + arr[i].first == target){
                res.push_back(arr[i].second);
                res.push_back(arr[pos].second);
            }
        }
        return res;
    }
};
// @lc code=end

