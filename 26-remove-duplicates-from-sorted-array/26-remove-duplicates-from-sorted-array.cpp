class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int n=nums.size();
if(n==0){
return n;
}
int k=1;
for(int i=0;i<n-1;i++){
if(nums[i]!=nums[i+1]){
nums[k]=nums[i+1];
k++;
}
else{
continue;
}

   }
   return k;
}};