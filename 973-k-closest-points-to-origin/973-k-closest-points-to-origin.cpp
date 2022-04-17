class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
     priority_queue<pair<int,pair<int,int>>> pq;
     int n=arr.size();
    for(int i=0;i<n;i++)
    {
        pq.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
    }
    
    while(pq.size()>k)
    {
    pq.pop();
    }
        //   passing the vector to ans 
    vector<vector<int>> ans;
    while(pq.size()>0)
    {
    // p=pq.top().second;
    ans.push_back({pq.top().second.first,pq.top().second.second});
    pq.pop();
    }
        return ans;
    }
};