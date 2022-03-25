class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
        vector<int>first_region(n);
        vector<int>last_region(n);
        vector<int>ans(n);
        first_region[0]=1;
        last_region[0]=1;
        for(int i=1;i<n;i++){
            first_region[i]=nums[i-1]*first_region[i-1];
            last_region[i]=nums[n-i]*last_region[i-1];
        }
        for(int i=0;i<n;i++){
            ans[i]=first_region[i]*last_region[n-1-i];
        }
        return ans;
    }
};