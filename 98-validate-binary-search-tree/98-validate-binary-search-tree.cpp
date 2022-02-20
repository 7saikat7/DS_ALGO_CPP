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
public:
    bool isValidBST(TreeNode* root) {
       return isbst(root,LONG_MIN,LONG_MAX); 
    }
    bool isbst(TreeNode* root,long min_v,long max_v){
        if(root==NULL) return true;
    if(root->val<=min_v || root->val>=max_v) return false;
    return isbst(root->left,min_v,root->val) && isbst(root->right,root->val,max_v);
    }
};