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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(!list1) return list2;
    if (!list2) return list1;
      ListNode* dummy=new ListNode(0);
      ListNode* ptr=dummy;
        ptr->next=list1;
      while(ptr->next!=NULL && list2!=NULL ){
          if(ptr->next->val>list2->val){
              ListNode* temp=ptr->next;
              ListNode* temp2=list2->next;
              ptr->next=list2;
              list2->next=temp;
              ptr=ptr->next;
              list2=temp2;
          }else{
              ptr=ptr->next;
          }
      }
    if(list2!=NULL) ptr->next=list2;
    return dummy->next;
    }
};