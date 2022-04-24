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
    ListNode *detectCycle(ListNode *head) {
     if(head==NULL) return NULL;
     ListNode* fast=head,*slow=head;
     while(fast && fast->next)
     {
         fast=fast->next->next;
         slow=slow->next;
         
         if(slow==fast)
             break;
     }
     if(fast && fast->next)
     {
         slow=head;
    
          while(fast!=slow)
         {
             fast=fast->next;
             slow=slow->next;
         }

         return slow; 
     }
        return nullptr;
    }
};