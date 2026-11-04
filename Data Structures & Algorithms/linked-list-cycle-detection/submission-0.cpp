/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(!head || !(head->next) || !(head->next->next))
            return false;
        ListNode* slow=head->next, *fast=slow->next;
        while(slow!=fast) {
            slow = slow->next;
            fast = fast->next;
            if(!fast)   
                return false;
            fast = fast->next;
            if(!fast)   
                return false;
        }
        return true;
    }
};
