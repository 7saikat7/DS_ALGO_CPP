class Solution {
public:
    string defangIPaddr(string address) {
     string s="";
    for(auto it:address){
        cout<<isdigit(it);
        if(isdigit(it)!=0){s=s+it;}
        else {
            s=s+"[.]";
        }
    }
        return s;
    }
};