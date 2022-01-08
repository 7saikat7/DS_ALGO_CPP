class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
     vector<int> vec1;
     int i=0;
     int j=numbers.size()-1;
    while(true){
    if(numbers[i]+numbers[j]>target){
             j--;
                    
         }
       
         else if(numbers[i]+numbers[j]<target){
             i++;
             
         }
          else {
             vec1.push_back(i+1);
             vec1.push_back(j+1);
             break;    
         }
     }
     return vec1;
    }
    
};