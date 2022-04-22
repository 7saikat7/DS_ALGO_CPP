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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* root=head;
        ListNode* nextptr=NULL;
        ListNode* prev=NULL;
        int c=0;
        while(root!=NULL && c<k)
        {
             nextptr=root->next;
             root->next=prev;
             prev=root;
             root=nextptr;
             c++;
        }
        //head->next=root;
        int l=0;
        ListNode* temp=root;
        while(temp!=NULL)
        {
            temp=temp->next; l++;
        }
        cout<<l<<endl;
        if(root!=NULL && l>=k)
        {
            head->next=reverseKGroup(root,k);
        }
        else if(root!=NULL && l<k)
        {
            head->next=root;
        }
        
        return prev;
    }
};