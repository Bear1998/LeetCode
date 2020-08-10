/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(p == nullptr && q == nullptr){
        //     return true;
        // }else if(p != nullptr && q != nullptr){
        //     if(p->val == q->val){
        //         if(p->left != nullptr && q->left != nullptr && p->right != nullptr && q->right != nullptr){
        //             return isSameTree(p->left ,q->left) & isSameTree(p->right ,q->right);
        //         }else if(p->left == nullptr && q->left == nullptr && p->right == nullptr && q->right == nullptr){
        //             return true;
        //         }else if(p->left != nullptr && q->left != nullptr && p->right == nullptr && q->right == nullptr){
        //             return isSameTree(p->left ,q->left);
        //         }else if(p->left == nullptr && q->left == nullptr && p->right != nullptr && q->right != nullptr){
        //             return isSameTree(p->right ,q->right);
        //         }else{
        //             return false;
        //         }
        //     }else{
        //         return false;
        //     }
        // }else{
        //     return false;
        // }
        if(p== nullptr && q==nullptr)
            return true;
        else if(p == nullptr || q == nullptr)
            return false;
        if(p->val == q->val)
            return isSameTree(p->left, q->left ) && isSameTree(p->right, q->right);
        return false;
    }
};
// @lc code=end

