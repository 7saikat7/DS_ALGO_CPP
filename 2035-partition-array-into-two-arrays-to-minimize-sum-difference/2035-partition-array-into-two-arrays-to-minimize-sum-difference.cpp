class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        vector<int> left, right;
        int sum = 0;
        int n = nums.size() / 2;
        for(int i = 0; i < 2 * n; i++) {
            if(i < n)
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
            sum += nums[i];
        }
        vector<vector<int>> sumLeft(n + 1), sumRight(n + 1); //sumRight[i] stores all possible sum of i elements in the Right array
        for(int i = 1; i < 1 << n; i++) {
            int count = 0;
            int subSetSum = 0;
            for(int j = 0; j < n; j++) {
                if((1 << j ) & i){
                    count++;
                    subSetSum += left[j];
                }
            }
            sumLeft[count].push_back(subSetSum);
            subSetSum = 0;
            count = 0;
            for(int j = 0; j < n; j++) {
                if((1 << j ) & i){
                    count++;
                    subSetSum += right[j];
                }
            }
            sumRight[count].push_back(subSetSum);
        }
        sumLeft[0].push_back(0);
        sumRight[0].push_back(0);
        for(auto it: sumLeft){
            sort(it.begin(), it.end());
        }
        int ans = INT_MAX;
        for(int i = 0; i <= n; i++) {
                sort(sumRight[n-i].begin(), sumRight[n-i].end());
            for(auto iSumLeft : sumLeft[i]) {
                int fi = (sum - 2*iSumLeft) / 2;
                auto it = lower_bound(sumRight[n-i].begin(), sumRight[n-i].end(), fi) - sumRight[n-i].begin();// try to find the closest element in the sumRight[n - i] array such that our answer is close to 0
                if(it != sumRight[n-i].size())
                    ans = min(ans, abs(sum - 2*((sumRight[n-i][it]) + iSumLeft)));
                if(it != 0){
                    ans = min(ans, abs(sum-2*(iSumLeft+(sumRight[n-i][it-1]))));}
            }
        }
        return ans;
    }
};