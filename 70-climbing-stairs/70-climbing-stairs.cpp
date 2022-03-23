class Solution {
public:
    int climbStairs(int n) {
        long first=1;
        long second=1;
        for(int i=0;i<n;i++){
          int temp=first;
          first=first+second;
          second=temp;
        }  
        return second;
    
    }
};