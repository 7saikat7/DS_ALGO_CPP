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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> set1;
        for(ListNode* current=head;current!=NULL;current=current->next){
            if(set1.find(current)!=set1.end()){
                return true;}
            set1.insert(current);
        }
        return false;
    }
};