class Solution {
public:
    int minDifference(vector<int>& nums) {
    int n=nums.size()-1;
  //  vector<int>nums2=nums;
   // sort(nums2.begin(),nums2.end());
    if(n<4) return 0;
    int k=0,l=0,m=0,p=0;
    sort(nums.begin(),nums.end());
    // First 3 with last one
    k=nums[n]-nums[3]; cout<<k<<endl;
    
    l=nums[n-3]-nums[0];cout<<l<<endl;
   
    m=nums[n-2]-nums[1];cout<<m<<endl;
    p=nums[n-1]-nums[2];cout<<p<<endl;
    ////////
    return min({k,l,m,p});
    }
};