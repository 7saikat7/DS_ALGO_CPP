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
    vector<int> vec1;
    void inorderfunc(TreeNode* root){
        if(root==NULL) return;
        
        inorderfunc(root->left);
        vec1.push_back(root->val);
        inorderfunc(root->right);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorderfunc(root);
        return vec1;
    }
};