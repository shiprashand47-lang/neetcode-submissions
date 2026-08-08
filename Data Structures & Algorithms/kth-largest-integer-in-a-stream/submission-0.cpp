
#include<bits/stdc++.h>
class KthLargest {
public:
    int K;
    priority_queue<int> pq;
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for(auto x:nums){
            pq.push(x);
        }
       
    }
    
    int add(int val) {
        pq.push(val);
        int cnt=K;
        int ans=0;
        vector<int> v;
        while(cnt-1){
            v.push_back(pq.top());
            pq.pop();
            cnt--;
        }
        ans=pq.top();
        for(auto x:v){
            pq.push(x);
        }
        return ans;
    }
};
