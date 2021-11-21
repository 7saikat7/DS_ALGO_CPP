
class Solution {
public:
    int val=0;
    int findDuplicate(vector<int>& nums) {
     int finder=0;
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
        finder+=nums[i];
            break;
        }
        
    }
    return finder;}
};
