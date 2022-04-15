class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
     priority_queue<int,vector<int>,greater<int>> pq;
        int mod=1e9+7;
    for(auto& it:nums){
        pq.push(it);
    }
    while(k--){
        int x=pq.top();
        x+=1;
        pq.pop();
        pq.push(x);
        
    }
    long long int ans=1;
    while(pq.size()>0){
        int x=pq.top();
        pq.pop();
        ans=(ans*x)%mod;
        
    }
        return ans;
    }
};