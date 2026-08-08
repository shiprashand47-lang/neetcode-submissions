class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<int>> mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        for(auto x:mp){
            vector<string> s;
            cout<<x.first<<" ";
            for(auto y:x.second){
                s.push_back(strs[y]);
                cout<<y<<" ";
            }
            cout<<endl;
            ans.push_back(s);
        }
        return ans;
    }
};
