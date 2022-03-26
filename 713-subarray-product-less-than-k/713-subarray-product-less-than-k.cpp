class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int ans=0;
    int prod=1;
    int left=0;
    int right=0;
    if(k<=1) return 0;
    while(right<nums.size()){
        prod *=nums[right];
        
        while(prod>=k){
            prod=prod/nums[left];
            left++;  
        }
        ans+=right-left+1;
        right ++;
        
    }
        return ans;
    }
};