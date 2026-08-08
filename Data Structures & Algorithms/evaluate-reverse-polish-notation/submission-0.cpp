#include<bits/stdc++.h>
class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> st;
        string s;
        int size=token.size();
     
        for(int i=0;i<size;i++){
            if(token[i]=="+"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t1+t2);
            }else if(token[i]=="*"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t1*t2);
            }else if(token[i]=="/"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t2/t1);
            }else if(token[i]=="-"){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t2-t1);
            }else{
                st.push(stoi(token[i]));
            }
        }
       // return 0;
        return st.top();
    }
};
