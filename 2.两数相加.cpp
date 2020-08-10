/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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

class Main {
    public: static void main(string[] args) {
        Solution solution = new Solution();
        ListNode* l1 = new ListNode(1);
        li->next = new ListNode(2);
        ListNode* l2 = new ListNode(0);

        ListNode* answer = solution.addTwoNumbers(l1,l2);
    }
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* l3 = temp;
        ListNode* pre = temp;
        cout << 0 << endl;
        while(l1 || l2){
            cout << 1 << endl;
            if(l1 && l2){
                int sum = l1->val + l2->val + temp->val;
                cout << sum << endl;
                if(sum > 9){
                    temp->val = sum%10;
                    ListNode* node = new ListNode(sum/10);
                    temp->next = node;
                }
                else
                {
                    temp->val = sum%10;
                    ListNode* node = new ListNode(0);
                    temp->next = node;
                }
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1){
                int sum = l1->val + temp->val;
                cout << sum << endl;
                if(sum > 9){
                    temp->val = sum%10;
                    ListNode* node = new ListNode(sum/10);
                    temp->next = node;
                }
                else
                {
                    temp->val = sum%10;
                    ListNode* node = new ListNode(0);
                    temp->next = node;
                }
                l1 = l1->next;
            }else if(l2){
                int sum = l2->val + temp->val;
                if(sum > 9){
                    temp->val = sum%10;
                    ListNode* node = new ListNode(sum/10);
                    temp->next = node;
                }
                else
                {
                    temp->val = sum%10;
                    ListNode* node = new ListNode(0);
                    temp->next = node;
                }
                l2 = l2->next;
            }
            pre = temp;
            temp = temp->next;
        }

        if(temp->val == 0){
            pre->next = NULL;
            ListNode* node = temp;
            delete node;
        }
        return l3;
    }
};
// @lc code=end

