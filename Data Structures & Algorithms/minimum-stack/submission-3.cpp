#include<bits/stdc++.h>
vector<int> st;
class MinStack {
public:
    MinStack() {
       st.clear();  
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        for(auto x:st) cout<<x<<" ";
        int size=st.size();
        st.erase(st.begin()+size-1);
        cout<<endl;
        for(auto x:st) cout<<x<<" ";
    }
    
    int top() {
        int size=st.size();

        return st[size-1];
    }
    
    int getMin() {
        int mini=INT_MAX;
        for(auto x:st){
            if(x<mini) mini=x;
        }
        return mini;
    }
};
