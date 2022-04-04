class Solution {
public:
    int convertTime(string current, string correct) {
     int ans=0;
     int a =stoi(current.substr(0,2));
     int b =stoi(current.substr(3,2));
     a=a*60+b;
         
     // for the c d variable 
        
     int  k =stoi(correct.substr(0,2));
     int l =stoi(correct.substr(3,2));
     k=k*60+l;
     int j=k-a;
     if(j==0) return 0;
     while(j>0){
     if(j>=60){ans+=j/60; j=j-60*(j/60); }
     else if(j>=15) {  ans+=j/15;j=j-15*(j/15); } 
     else if(j>=5){ ans+=j/5; j=j-5*(j/5);} 
     else { j--,ans++;}
     }
        
    return ans;
    }
};