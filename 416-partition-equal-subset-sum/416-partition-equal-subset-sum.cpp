class Solution {
public:
    bool canPartition(vector<int>& arr) {
     int sum=0;
     int N=arr.size();
      for(int i=0;i<N;i++){
      sum+=arr[i];
      }
        cout<<sum;
      int target=sum/2;
      int t[N+1][target+1];
      if(sum%2 ==0 ){
          for(int j=0;j<target+1;j++){
              t[0][j]=0;
          }
          for(int i=0;i<N+1;i++){
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
      else return 0;}
      
};