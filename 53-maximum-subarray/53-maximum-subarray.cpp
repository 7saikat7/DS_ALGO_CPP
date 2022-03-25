class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int curr=nums[0];
     int max_element=curr;
     for(int i=1;i<nums.size();i++){
         curr=max(nums[i],curr+nums[i]);
         max_element=max(curr,max_element);
     }
        return max_element;
    }
};