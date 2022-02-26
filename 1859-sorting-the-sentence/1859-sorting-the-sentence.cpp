class Solution {
public:
    string sortSentence(string s) {
    string word;
    vector<string> svec;
    map<int,string> mpp;
    
    string ans="";
    for(int i=0;i<s.length();i++){
        
        char it=s[i];
        if(it==' ')
        {
            char c=word[word.length()-1];
            
            int index=c-'0';
            cout<<index<<"----"<<word.substr(0,word.length()-1)<<endl;
            mpp[index]=word.substr(0,word.length()-1);
            word="";
        }
        else
        {
            word+=it;
        }
    }
        char c=word[word.length()-1];
            
            int index=c-'0';
            cout<<index<<"----"<<word.substr(0,word.length()-1)<<endl;
            mpp[index]=word.substr(0,word.length()-1);
        
        //sort(mpp.begin(),mpp.end());
        for(auto it:mpp)
        {
            ans+=it.second+" ";
        }
        return ans.substr(0,ans.length()-1);

    }
};