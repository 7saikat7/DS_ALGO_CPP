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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        
        ListNode* head=new ListNode(0);  
        ListNode* root=head;
 int carry=0;
while(l1!= NULL && l2!=NULL){
    int temp= l1->val+l2->val+carry;
    root->next=new ListNode(temp%10); 
    //  x%y if x>y then reminder and if x<y return x ;
    
    carry=temp/10;
    root=root->next;
    l1=l1->next;l2=l2->next;
}
while(l1!=NULL) {
    root->next=new ListNode((carry+l1->val)%10);
    carry=(carry+l1->val)/10;
    l1=l1->next;
    root=root->next;
   
}
    
while(l2!=NULL) {
    root->next=new ListNode((carry+l2->val)%10);
    carry=(carry+l2->val)/10;
    l2=l2->next;
    root=root->next;
    }
if(carry) root->next=new ListNode(carry);
return head->next;
}
    
};