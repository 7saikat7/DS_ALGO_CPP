class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
    int n=(nums.size())/2;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++){
    if(m.find(nums[i])!=m.end()){
        m[nums[i]]++;}
        else m[nums[i]]=1;
    }
    for(auto it:m){
        if(it.second==n) return it.first;
    }
    return 0;
    }
};