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
   ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *pre=head;
        ListNode *nex=head->next;
        while(nex && pre)
        {
            if(pre->val==nex->val)
                nex=nex->next;
            else
            {
                pre=pre->next;
                pre->val=nex->val;
                nex=nex->next;
            }
        }
        pre->next=NULL;
        return head;
    }
};