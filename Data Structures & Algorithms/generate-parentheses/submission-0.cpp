class Solution {
public:
    void bt(int open,int close,int n,vector<string> &st,string& s){
        if(open==close && open==n){
            st.push_back(s);
            return;
        }
        if(open<n){
            s+='(';
            bt(open+1,close,n,st,s);
            s.pop_back();
        }
        if(close<open){
            s+=')';
            bt(open,close+1,n,st,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        
        string s="";
        vector<string> st;
        bt(0,0,n,st,s);
        return st;
    }
};
