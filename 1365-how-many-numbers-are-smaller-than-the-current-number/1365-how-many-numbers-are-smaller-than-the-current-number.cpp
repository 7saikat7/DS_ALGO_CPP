class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int root=nums[i];
        int counter=0;
        for(int j=0;j<nums.size();j++){
            if(root>nums[j]){
                counter++;
            }

        }
        ans.push_back(counter);
    }
        return ans;
    }
};


