class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)  return 0;
        int ans=nums[n-k];
        return ans ;
    }
};