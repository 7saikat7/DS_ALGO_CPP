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
    TreeNode* bstToGst(TreeNode* root) {
    int ans=0;
    backtrack(root,ans);
    return root;
    }
    void backtrack(TreeNode* root,int &ans){
        if(root==NULL) return ; 
        backtrack(root->right,ans);
        ans=ans+root->val;
        root->val=ans;
        backtrack(root->left, ans);
        
    }
};