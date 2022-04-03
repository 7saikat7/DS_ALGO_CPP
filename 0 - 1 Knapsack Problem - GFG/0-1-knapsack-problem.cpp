// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int dp[1001][1001];
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
      // int  dp[n][w];
       memset(dp,-1,sizeof(dp));
       return func(n-1,w,wt,val);
    }
    int func(int n,int w,int wt[],int val[]){
       
        if(w==0 or n==-1) return 0;
        if(dp[n][w]!=-1) return dp[n][w];
        if(wt[n]>w){
           return dp[n][w]=func(n-1,w,wt,val);
        }
        int a=0,b=0;
        a=val[n]+func(n-1,w-wt[n],wt,val);
        b=func(n-1,w,wt,val);
        return max(a,b);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends