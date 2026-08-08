#include<bits/stdc++.h>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans;
        priority_queue<int> pq;
        for(auto x:nums){
            pq.push(x);
        }
        while(k-1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};
