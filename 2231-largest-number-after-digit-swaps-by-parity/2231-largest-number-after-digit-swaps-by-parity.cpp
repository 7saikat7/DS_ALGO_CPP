class Solution {
public:
    int largestInteger(int num) {
    priority_queue<int> even;
    priority_queue<int> odd;
   string s=to_string(num);
    while(num!=0){
        int x=num%10;
        num=num/10;
        if(x%2==0){
            even.push(x);
        }
        else{
            odd.push(x);
        }
        
    }
    
    int ans=0;
    for(char it:s){
        cout<<it<<"__";
        ans=ans*10;
        if((it-'0')%2==0){
           ans+=even.top();even.pop();
        }
        else{
            ans+=odd.top();odd.pop();
        ;
        }
    }
     return ans;   
        
    }
};