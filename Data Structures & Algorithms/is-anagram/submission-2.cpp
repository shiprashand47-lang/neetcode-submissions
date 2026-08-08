class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;s[i]!='\0';i++){
            mp1[s[i]]++;
        }
        for(int i=0;t[i]!='\0';i++){
            mp2[t[i]]++;
        }
        for(auto x:mp1){
            if(mp2.find(x.first)==mp2.end())
                return false;
            else if(mp2[x.first]!=x.second)
                return false;

        }
        return true;

    }
};
