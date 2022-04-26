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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* root=head;
        ListNode* curr=head->next;
        //int ans=root->val;
        while(curr!=NULL)
        {
            if(curr->val!=0)
            {
             root->val +=curr->val;  
            
            }
            else{
                if(curr->next==NULL){root->next=NULL;}
                else {
                    root->next=curr;
                    root=curr;
                }
            }
            curr=curr->next;
        }
        return head;
        
    }
};