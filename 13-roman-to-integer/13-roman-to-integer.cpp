class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char,int> map1;
    map1['I']=1;
    map1['V']=5;
    map1['X']=10;
    map1['L']=50;
    map1['C']=100;
    map1['D']=500;
    map1['M']=1000;
    
    int result=map1[s[s.size()-1]];
    for(int i=s.size()-2;i>=0;i--){
        if(map1[s[i]]<map1[s[i+1]]){
         result-=map1[s[i]];
        }
        else{ result+=map1[s[i]];}   
    }
    return result;
    }
};