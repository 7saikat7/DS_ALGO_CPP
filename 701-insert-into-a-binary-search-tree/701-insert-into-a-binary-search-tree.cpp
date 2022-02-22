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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
     if(!root){
         TreeNode* node=new TreeNode(val);
         return node;
     }
     else func(root,val);  
     return root;
    }
    void func(TreeNode* root,int val){
         if(!root) return ;
    if(val>root->val){
        if(root->right)func(root->right,val);
        else{
            TreeNode* node=new TreeNode(val);
          root->right=node;
    }}
    else if(val<root->val){
        if(root->left) func(root->left,val);
        else{
            TreeNode* node=new TreeNode(val);
            root->left=node;}
    
    }
    }
};