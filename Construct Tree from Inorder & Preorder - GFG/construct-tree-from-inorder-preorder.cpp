// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution {
public:
    int idx = 0;
    int search(int inorder[], int start, int end, int curr) {
        for(int i=start; i<=end; i++) {
            if(inorder[i] == curr) return i;
        }
        return -1;
    }
    
    Node* makeTree(int preorder[], int inorder[], int start, int end) {
        if(start > end) return NULL;
        Node* root = new Node(preorder[idx++]);
        
        if(start == end) return root;
        
        int pos = search(inorder, start, end, root->data);
        root->left = makeTree(preorder, inorder, start, pos-1);
        root->right = makeTree(preorder, inorder, pos+1, end);
        return root;
    }

    
    Node* buildTree(int in[],int pre[], int n) {
        return makeTree(pre, in, 0, n-1);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends