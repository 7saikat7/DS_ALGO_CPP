class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
    string ans="";
    for(string i:words){
        ans+=i;
        if(ans.length()>=s.length())
            return (ans==s);
    }
   return (ans==s);
    }
};