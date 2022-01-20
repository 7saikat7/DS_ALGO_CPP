/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> vec1;
    void func_preorder(Node* root ,vector<int>&ans){
        if (root==NULL) return;
        vec1.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            func_preorder(root->children[i], ans);
        }
        
    }
    vector<int> preorder(Node* root) {
     func_preorder(root,vec1);
    return vec1;
    }
};