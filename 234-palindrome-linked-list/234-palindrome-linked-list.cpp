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
    bool isPalindrome(ListNode* head) {
    if(head==NULL) return false;
    ListNode* root=head;
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
        ListNode* curr=slow;
        ListNode* nextptr=NULL;
        ListNode* prev=NULL;
        while(curr!=NULL){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        } 
        fast=head;
        while(prev!=NULL)
        {
            if(fast->val!=prev->val) return false;            
            else {
                fast=fast->next;
                prev=prev->next;
            }
        }
        return true;
    }
};