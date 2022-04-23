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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* root1=headA;
    ListNode* root2=headB;
    int c1=0,c2=0;
    while(root1!=NULL)
    {   c1++;
        root1=root1->next;
    }
    while(root2!=NULL)
    {
        c2++;
        root2=root2->next;
    }
    root1=headA;
    root2=headB;
    int l=abs(c1-c2);
    if(c1>c2){
        for(int i=0;i<l;i++){
         root1=root1->next;  
        }
    }
    if(c2>c1){
        for(int i=0;i<l;i++){
         root2=root2->next;  
        }
    }
    while(root1!=root2)
    {
        root1=root1->next;
        root2=root2->next;
    }
    if(root1) return root1;
    else return nullptr;
        
    }
};