#include<bits/stdc++.h>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int top1;
        int top2;
        priority_queue<int> pq;
        for(auto x:stones){
            pq.push(x);
        }
        while(pq.size()!=1){
            top1=pq.top();
            pq.pop();
            top2=pq.top();
            pq.pop();
            if(top1<top2){
                pq.push(top2-top1);
            }else{
                pq.push(top1-top2);
            }
        }
        return pq.top();
        
        
    }
};
