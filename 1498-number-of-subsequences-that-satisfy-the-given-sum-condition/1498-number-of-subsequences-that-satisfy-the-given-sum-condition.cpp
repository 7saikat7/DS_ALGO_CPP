class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
    int n=nums.size(); 
    int s=0,e=n-1,count=0;
    long mod=1e9+7;
    vector<int>power_func(n,1);
    
    for(int i=1;i<n;++i)
    {
        power_func[i]=power_func[i-1]*2 %mod;
    }
    sort(nums.begin(),nums.end());
    while(s<=e)
    {
        if(nums[s]+nums[e]>target)
        {
            e--;
        }
        else
        {
         count=(count+power_func[e-s])%mod;
         s++;
        }
    }
        return count;
    }
};