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
    int ans=0;
    TreeNode* convertBST(TreeNode* root) {
      if(root==NULL) return 0;  
      
      root->right=convertBST(root->right);
      ans+=root->val;
      root->val=ans;
      root->left=convertBST(root->left);
      return root;
    }
};