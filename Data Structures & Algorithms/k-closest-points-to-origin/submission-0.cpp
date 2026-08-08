#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>> pq;
        vector<vector<int>> v;
        int n=points.size();
        for(int i=0;i<n;i++){
            double val;
            int x,y;
            x=points[i][0];
            y=points[i][1];
            val=sqrt(x*x+y*y);
            pq.push({val,i});
        }
        while(k){
            pair<double,int> p;
            p=pq.top();
            v.push_back(points[p.second]);
            k--;
            pq.pop();
        }
        return v;
    }
};
