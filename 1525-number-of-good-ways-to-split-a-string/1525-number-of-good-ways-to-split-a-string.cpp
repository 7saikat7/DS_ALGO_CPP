class Solution {
public:
    int numSplits(string s) {
     int n=s.length();
     int prefix[n];
     int suffix[n];
     unordered_set<char> pre_set;
     unordered_set<char> su_set;
     for(int i=0;i<n;i++){
         pre_set.insert(s[i]);
         su_set.insert(s[n-i-1]);
         prefix[i]=pre_set.size();
         suffix[n-i-1]=su_set.size();
     }
        int ans=0;
        for(int i=1;i<n;i++){
            if(prefix[i-1]==suffix[i]) ans++;
        }
        return ans;
    }
};