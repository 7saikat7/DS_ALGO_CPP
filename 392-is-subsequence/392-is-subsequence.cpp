class Solution {
public:
    bool isSubsequence(string s, string t) {
        
     int i=0;
     for(int k=0;k<t.length();k++ && i<s.length())
     {
         if(s[i]==t[k]) i++;
     }
     return(i==s.length());
    }
};