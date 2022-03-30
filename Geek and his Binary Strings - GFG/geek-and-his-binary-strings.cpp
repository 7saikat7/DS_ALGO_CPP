// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int prefixStrings(int n)
	{
     if(n<=1) return 1;
     int mod=1e9+7;
     long int res[n+1];
     res[0]=1,res[1]=1;
     for(int i=2;i<=n;i++){
         res[i]=0;
         for(int j=0;j<i;j++){
         res[i]+= ((res[j]%mod)*(res[i-j-1]%mod))%mod;
             
         }
     }
     return res[n]%mod;
	}

};
	

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n;
       	cin >> n;

       

        Solution ob;
        cout << ob.prefixStrings(n);
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends