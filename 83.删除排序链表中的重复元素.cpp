/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* result = head;
        ListNode* temp = NULL;
        if(head)
            temp = head->next;
        while(temp){
            if(temp->val == head->val && temp->next != NULL){
                head->next = temp->next;
                temp = head->next;
            }else if(temp->val == head->val && temp->next == NULL){
                head->next = NULL;
                temp = NULL;
            }else{
                head = temp;
                temp = temp->next;
            }
        }
        return result;
    }
};
// @lc code=end

