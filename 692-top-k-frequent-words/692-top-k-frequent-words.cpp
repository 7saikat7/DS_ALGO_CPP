class Solution {
    struct comp_func{

        bool operator()(const pair<string,int> &a,const pair<string,int> &b){
            return a.second>b.second || (a.second==b.second && a.first<b.first);
    }
    };
public:
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mpp;
        vector<string> ans;
        for(auto &it:words){
            mpp[it]++;
        }
        priority_queue<pair<string,int>,vector<pair<string,int>>,comp_func> minheap;
        
        for(const auto &it:mpp){
             minheap.push(it);
             if(minheap.size()>k) minheap.pop();
//             if(minheap.size()<k){
//                 minheap.push({it.first,it.second});
//             }
//             else{
//                 if(it.second>minheap.top().second){
//                     minheap.pop();
//                     minheap.push({it.first,it.second});
//                 }
//                 else if(it.second==minheap.top().second){
                    
//                     if(it.first<minheap.top().first){
//                         minheap.pop();
//                         minheap.push({it.first,it.second});}
//                 }
//             }
        }
        while(!minheap.empty()){
            ans.push_back(minheap.top().first);
            minheap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};