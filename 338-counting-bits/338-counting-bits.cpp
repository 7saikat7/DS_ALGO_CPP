class Solution {
public:
    vector<int> countBits(int n) {
    vector<int> ans;
    if(n==0) {
        ans.push_back(0); return ans;}
    for(int i=0;i<=n;i++){
        int sum=0;
        int number=i;
        while(number!=0){
            sum+=number%2;
            number=number/2;
        }
     ans.push_back(sum);
    }
    return ans;
    }
};