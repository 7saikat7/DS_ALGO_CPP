class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    int counter=0;
    sort(nums.begin(),nums.end());
    int l=0,r=nums.size()-1;
    while(l<r)
    {
        if(nums[l]+nums[r]>k){ r--;}
        else if(nums[l]+nums[r]<k){l++;}
        else {counter++, r--;l++; cout<<"reached here once "<<nums[l]+nums[r]<<endl;
             cout<<l<<" "<<r;}
    }
        return counter;
    }
};