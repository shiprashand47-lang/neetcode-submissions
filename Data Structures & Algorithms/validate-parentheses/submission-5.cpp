
#include<bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans=false;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='['||s[i]=='('||s[i]=='{'){
                st.push(s[i]);
            }else{
                char c;
                if(s[i]==']'){
                    c='[';
                }else if(s[i]==')'){
                    c='(';
                }else{
                    c='{';
                }
                if(!st.empty() && st.top()!=c) {
                    
                    return false;                   
                }else if(!st.empty() && st.top()==c){
                    st.pop();
                }else{
                    return false;
                }
                
            }
        }
        if(!st.empty()) return false;
        return true;

    }
};
