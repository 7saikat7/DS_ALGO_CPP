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
    ListNode* rotateRight(ListNode* head, int k) {
    if(k==0) return head;
    if(!head) return nullptr;
    ListNode* root=head;
    int len=1;
    while(root->next)
    {
        root=root->next;len++;
    }
        root->next=head;
    k=k%len;
    k=len-k;
    while(k--)  root=root->next;
    head=root->next;
    root->next=NULL;

    return head;    
    }
};