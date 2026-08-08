#include<bits/stdc++.h>
stack<int> st;
class MinStack {
public:
    MinStack() {
       while(!st.empty()){
        st.pop();
       }  
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> p;
        int mini=INT_MAX;

        while(!st.empty()){
            cout<<st.top()<<" ";
            if(st.top()<mini) mini=st.top();
            p.push(st.top());
            st.pop();
        }
        while(!p.empty()){
            st.push(p.top());
            p.pop();
        }
        return mini;
    }
};
