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
int ma;
public:
    int diameterOfBinaryTree(TreeNode* root) {
     ma=0;
     int b=func(root);
     return ma-1;
    }
    int func(TreeNode* node){
       if(!node) return 0;
       int x=func(node->left);
       int y=func(node->right);
       ma=max(ma,x+y+1);
       return (max(x,y)+1);
    }
};