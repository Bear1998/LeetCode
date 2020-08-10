/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* l3 = temp;
        while(l1 || l2){
            if(l1 && l2){
                int v1 = l1->val;
                int v2 = l2->val;
                ListNode* node;
                if(v1 <= v2){
                    node = new ListNode(v1);
                    l1 = l1->next;
                }
                else{
                    node = new ListNode(v2);
                    l2 = l2->next;
                }
                temp->next = node;
                temp = temp->next;
            }else if(l1){
                int v1 = l1->val;
                ListNode* node = new ListNode(v1);
                temp->next = node;
                l1 = l1->next;
                temp = temp->next;
            }else if(l2){
                int v2 = l2->val;
                ListNode* node = new ListNode(v2);
                temp->next = node;
                l2 = l2->next;
                temp = temp->next;
            }
        }
        ListNode* temp_del = l3;
        l3 = l3->next;
        delete temp_del;
        return l3;
    }
};
// @lc code=end

