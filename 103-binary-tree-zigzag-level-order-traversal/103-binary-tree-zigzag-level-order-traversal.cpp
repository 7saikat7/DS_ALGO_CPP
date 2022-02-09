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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    if(!root) return ans;
    q.push(root);
    bool f=true; // even level
    while(!q.empty()){
    vector<int> temp;
    int sz=q.size();
    while(sz--){
    TreeNode* front=q.front();
    q.pop();
    temp.push_back(front->val);
    if(front->left) q.push(front->left);
    if(front->right) q.push(front->right);
    }
    if(f==false) reverse(temp.begin(),temp.end());
    ans.push_back(temp);
    f=!f;
    }
    return ans ;
}};