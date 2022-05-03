class Solution {
public:
    void find(int st,int end,string temp,vector<string> &ans)
    {
        cout<<temp<<endl;
        if(st==0 && end==0){
            ans.push_back(temp);
            return;
        }
        if(st==end)
        {
            
            temp+='(';
            find(st-1,end,temp,ans);
            temp.pop_back();
        }
        else{
        if(st>0 && st<end)
        {
             
            temp+='(';
            find(st-1,end,temp,ans);
           temp.pop_back();
        }
        if(end>0 && end>st)
        {
            
            temp+=')';
            find(st,end-1,temp,ans);
            
        }
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="";
        int st=n;
        int end=n;
        find(st,end,str,ans);
        return ans;
    }
};