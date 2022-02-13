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
    void inOrder(vector<int>& arr,TreeNode *root){
        if(root != NULL){
            arr.push_back(root->val);
            inOrder(arr,root->left);
            inOrder(arr,root->right);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inOrder(arr,root); //finding inorder traversal of tree
        sort(arr.begin(),arr.end()); // sorting 
        int j=arr.size()-1,i=0; // assining j to last index and i to first index
        while(i<j){
            int n = arr[j]+arr[i]; 
            if(k==n) return true; // if target sum found return true
            else if(k<n) j--; // if target sum is not found and current sum is greater than k then decrease j by 1
            else i++;           // otherwise increase i 
        }
        return false;
    }
};