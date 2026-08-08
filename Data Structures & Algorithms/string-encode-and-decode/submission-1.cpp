class Solution {
public:
    unordered_map<int,string> mp;
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
        int size=mp.size();
        for(int i=0;i<size;i++){
            sv.push_back(mp[i]);
        }
        return sv;
    }
};
