class Solution {
public:
    int largestInteger(int num) {
    string s=to_string(num);
    priority_queue<int> odd,even;
    for(auto& it:s){
        int x=it-'0';
        if(x%2==0) even.push(x);
        else odd.push(x);
    }
    for(auto& x:s){
        int temp=x-'0';
        if(temp%2==0) {x=even.top()+'0';cout<<x<<"EVEN ";even.pop();}
        else  {x=odd.top()+'0';cout<<x<<"Odd ";odd.pop();}
    }
    return stoi(s);
    }
};