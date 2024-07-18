class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        
        for(int i = 0; i < k; i++)
            pq.push(make_pair(nums[i], i));
        int i = 0, j = k;
        while(j <= n) {
            while(pq.top().second < i)
                pq.pop();
            res.push_back(pq.top().first);
            if(j < n)
                pq.push(make_pair(nums[j], j));
            i++;
            j++;
        }
        
        return res;
    }
};