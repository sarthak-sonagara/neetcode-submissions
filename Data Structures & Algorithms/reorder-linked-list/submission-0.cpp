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
    void reorderList(ListNode* head) {
        // find half
        // reverse second half
        // interleave
        if(!head || !(head->next))
            return;
        ListNode *slow=head, *fast=head;
        while((fast->next) && (fast->next->next)){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *pre=nullptr, *cur=slow->next;
        slow->next = nullptr;
        while(cur) {
            ListNode* nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        ListNode *first=head, *second=pre;
        while(second) {
            ListNode *fnex = first->next;
            ListNode *snex = second->next;
            first->next = second;
            first = fnex;
            second->next = first;
            second = snex;
        }
    }
};
