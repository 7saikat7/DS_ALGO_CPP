class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
    vector<int> nums2=nums;
    sort(nums2.begin(),nums2.end());
    if(nums2==nums) return 0;
    int j=0,cnt1=-1,cnt2=-1;
    if(nums.size()<=1) return 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=nums2[j]) {
         if(cnt1==-1){
             cnt1=i;
         }
         else{
             cnt2=i;
         }
        }
        
        j++;
    }
        
        return cnt2-cnt1+1;
        
    }
};