class Solution {
public:
    string removeDigit(string number, char digit) {
    int n=number.length();
    string ans="";
    for(char i=0;i<n;i++)
    {
        if(number[i]==digit)
        {
         string temp1=number.substr(0,i);
         string temp2=number.substr(i+1,n-i-1);
         ans=max(ans,temp1+temp2);
        }
    }
  return ans;
    }
   
};