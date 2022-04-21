// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
     struct Node* reverse(struct Node* first)
    {
       if(first!=NULL){
         struct Node* nextptr=NULL;
         struct Node* curr=first;
         struct Node* prev=NULL;
         while(curr!=NULL)
         {
             nextptr=curr->next;
             curr->next=prev;
             prev=curr;
             curr=nextptr;
             
         }
         first=prev;
     }  
     return first;
    };
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first1, struct Node* second1)
    {
     struct Node* first=reverse(first1);
     struct Node* second=reverse(second1);
     
     struct Node* head=new Node(0);
     struct Node* root=head;
     int carry=0;
     while(first!=NULL && second!=NULL)
     {
      int temp=first->data+second->data+carry;
      root->next=new Node(temp%10);
      carry=temp/10;
      first=first->next;second=second->next;
      root=root->next;
     }
     while(first!=NULL)
     {
        int temp=(first->data+carry);
        root->next=new Node(temp%10);
        carry=temp/10;
        first=first->next;
        root=root->next;
        
        
     }
     while(second!=NULL)
     {
        int temp=(second->data+carry);
        root->next=new Node(temp%10);
        carry=temp/10;
        second=second->next;
        root=root->next;
        
     }
     if(carry>0){
         root->next=new Node(carry);
         
     }
     struct Node* temp=reverse(head->next);
    return temp;
    }
    
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends