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
    int kthSmallest(TreeNode* root, int k) {
    vector<int> inorder;
    func(root,inorder);
    return inorder[k-1];
    }
    void func(TreeNode* root,vector<int>&inorder){
        if(!root) return ;
        func(root->left,inorder);
        inorder.push_back(root->val);
        func(root->right,inorder);
    }
};