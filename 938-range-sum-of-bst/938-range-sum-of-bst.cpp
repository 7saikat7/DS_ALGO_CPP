/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int sum=0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
    rsb(root,low,high);
    return sum;
    }
    void rsb(TreeNode* node,int L,int H){
        if(!node) return;
        
        if(node->val >=L && node->val <=H) sum=sum+node->val;
        
        if(node->val >=L) rsb(node->left,L,H);
        if(node->val <=H) rsb(node->right,L,H);
    
    }
};