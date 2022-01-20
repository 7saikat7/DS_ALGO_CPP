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
    vector<int>vec1;
public:
    
    void fun_preorder(TreeNode* root){
        if(root==NULL) return;
        vec1.push_back(root->val);
        fun_preorder(root->left);
        fun_preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        fun_preorder(root);
        return vec1;
    }
};