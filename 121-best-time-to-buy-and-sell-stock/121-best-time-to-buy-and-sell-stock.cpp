class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int lsf=INT_MAX;
    int overallp=0;
    int position=0;
        
    for(int i=0;i<prices.size();i++){
        if(prices[i]<lsf){
            lsf=prices[i];
        }
      position=prices[i]-lsf;
      if(overallp<position){
         overallp=position;
      }
    }
    return overallp;
}};