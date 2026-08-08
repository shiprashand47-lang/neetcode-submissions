class Solution {
public:
    map<int,string> mp;
    string encode(vector<string>& strs) {
        string s;
        int i=0;
        int n=strs.size();
        for(int i=0;i<n;i++){
            mp[i]=strs[i];
            s=s+strs[i];
        }
        return s;
        
    }

    vector<string> decode(string s) {
        vector<string> sv;
        for(auto x:mp){
            sv.push_back(x.second);
        }
        return sv;
    }
};
