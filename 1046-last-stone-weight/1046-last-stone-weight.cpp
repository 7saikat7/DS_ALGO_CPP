class Solution {
public:
    struct comp{
        bool operator()(int &a,int &b){
          if(a<=b) return true;
          else return false;
        }
    };
    int lastStoneWeight(vector<int>& stones) {
     if(stones.size()==0) return 0;
     priority_queue<int,vector<int>,comp> pq;
     for(auto it:stones){
         pq.push(it);
     }
     while(pq.size()>1){
         //cout<<"before any pop "<<endl;
         int x=pq.top();
         //cout<<"first top"<<x<<endl;
         pq.pop();
         int y=pq.top();
         //cout<<"second top"<<y<<endl;
         pq.pop();
         if(x>y){pq.push(x-y);}//cout<<"pushing---"<<x-y;}
         
     }
     if(!pq.empty()) return pq.top();  
     else return 0;
    }
};