// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
     int p=n;
     int len[n];
     int t[n+1][p+1];
     for(int i=0;i<n;i++){
        len[i]=i+1;
     }
    for(int i=0;i<n+1;i++)
    {
        t[i][0]=0;
    }
     for(int j=0;j<p+1;j++)
    {
        t[0][j]=0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<p+1;j++)
        {
            if(len[i-1]<=j){
                t[i][j]=max(price[i-1]+t[i][j-len[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
            
        }
    }
    return t[n][p];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends