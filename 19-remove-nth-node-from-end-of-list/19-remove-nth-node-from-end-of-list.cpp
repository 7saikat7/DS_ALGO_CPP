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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* slow=head;ListNode* fast=head;
    if(!head) return head;
    if(head->next==NULL) return nullptr;
    while(n--) fast=fast->next;
    if(!fast) return head->next;
    while(fast->next)
    {
        slow=slow->next;fast=fast->next;
    }
    //slow will be n+1 th position from the end ;
    slow->next=slow->next->next;
    return head;
    }
};