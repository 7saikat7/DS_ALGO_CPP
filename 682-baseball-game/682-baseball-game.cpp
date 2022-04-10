class Solution {
public:
    int calPoints(vector<string>& ops) {
    vector<int> ans;
    for(string it:ops){
        if(it=="+"){
         int n=ans.size();
         int a=ans[n-1]+ans[n-2];
            cout<<a<<endl;
         ans.push_back(a);
        }
        else if(it=="D"){
            int a=ans[ans.size()-1];
            ans.push_back(2*a);
            cout<<a<<endl;
        }
        else if(it=="C"){
            int s=ans.size(); 
            ans.resize(s-1);
            cout<<"arraysize"<< s<<endl;
        }
        else{
          int a= stoi(it);
          ans.push_back(a);
          cout <<a<<endl;
        }
    }
    int sum=0;
    for(auto it:ans){
    sum+=it;
    }
    return sum ;
    }
};