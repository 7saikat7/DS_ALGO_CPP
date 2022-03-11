class Solution {
    struct comp{
      bool operator()(pair<int,int> &x,pair<int,int> &y)  {
          if(x.second!=y.second) return x.second>y.second;
          else return x.first>y.first;
      }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mpp;
    vector<int> ans;
     for(auto it:nums){
         mpp[it]++;
     }
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq; 
    for(auto &it:mpp){
        pq.push(it);
        if(pq.size()>k) pq.pop();
    }
    while(!pq.empty()){
        ans.push_back(pq.top().first);
        pq.pop();
    }
        
    return ans;
    }
};