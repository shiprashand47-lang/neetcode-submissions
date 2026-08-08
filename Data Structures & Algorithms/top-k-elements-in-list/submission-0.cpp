class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp1;
        priority_queue<pair<int,int>>pq;
        vector<int> ans;
        for(auto x:nums){
            mp1[x]++;

        }
        for(auto x:mp1){
           pq.push({x.second,x.first});
        }
        while(!pq.empty()&&k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
