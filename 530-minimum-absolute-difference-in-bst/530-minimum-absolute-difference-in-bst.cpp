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
    int getMinimumDifference(TreeNode* root) {
     if(!root) return 0;
        
     vector<int> vec;
     solver(root,vec);
     sort(vec.begin(),vec.end());
     int min_val=vec[1]-vec[0];
     for(int i=2;i<vec.size();i++){
        min_val=min(min_val,vec[i]-vec[i-1]);
     }
     return min_val;

    }
    void solver(TreeNode* root,vector<int> &vec){
        if(root==NULL) return;
        
        vec.push_back(root->val);
        solver(root->left,vec);
        solver(root->right,vec);
        
    }
};