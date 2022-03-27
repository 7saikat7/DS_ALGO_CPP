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
    //unordered_map<int, vector<TreeNode*>> cache;
    vector<TreeNode*> allPossibleFBT(int n) {
    vector<TreeNode*> ans;
    //if(cache[n].size() != 0) return cache[n];
    if(n==1) {ans.push_back(new TreeNode(0));}
    else{
        for(int i=1;i<n;i+=2){
            int l=i,r=n-i-1;
            for(TreeNode* it:allPossibleFBT(l)){
                for(TreeNode* it2:allPossibleFBT(r)){
                    TreeNode* root=new TreeNode(0);
                    root->left=it;
                    root->right=it2;
                    ans.push_back(root);
                }
            }
        }
        
    }  
        return ans;
    }
};