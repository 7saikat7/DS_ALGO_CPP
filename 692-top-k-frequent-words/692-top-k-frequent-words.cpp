class Solution {
    struct comp_func{

        bool operator()(pair<string,int> &a,pair<string,int> &b){
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
        
        for(auto &it:mpp){
             minheap.push(it);
             if(minheap.size()>k) minheap.pop();
        }
        while(!minheap.empty()){
            ans.push_back(minheap.top().first);
            minheap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};