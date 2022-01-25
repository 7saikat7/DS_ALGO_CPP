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
   vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> res;
    levelOrderAux(root, res, 0);
    return res;
}

void levelOrderAux(TreeNode* node, vector<vector<int>>& res, int level){
    if(node == NULL)
        return;

    if(level >= res.size()){
        res.push_back({node->val});
    } else {
        res[level].push_back(node->val);
    }
    levelOrderAux(node->left, res, level + 1);
    levelOrderAux(node->right, res, level + 1);
}
};