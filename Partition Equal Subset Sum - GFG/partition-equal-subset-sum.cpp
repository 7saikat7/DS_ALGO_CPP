// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int equalPartition(int N, int arr[])
    { int sum=0;
      for(int i=0;i<N;i++){
      sum+=arr[i];
      }
      int target=sum/2;
      int t[N+1][target+1];
      if(sum%2 ==0 ){
          for(int j=0;j<=target;j++){
            t[0][j]=0;
          }
          for(int i=0;i<=N;i++){
         t[i][0]=1;
          }
          for(int i=1;i<N+1;i++){
          for(int j=1;j<target+1;j++){
                
                 if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else {
                    t[i][j]=t[i-1][j];
                }
              }
          }
          return t[N][target];
      }
      else return 0;
      }
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends