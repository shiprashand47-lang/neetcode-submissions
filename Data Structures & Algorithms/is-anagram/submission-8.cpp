class Solution {
public:
    bool isAnagram(string s, string t) {
        
        string s1="",t1="";
        for(auto x:s){
            s1+=tolower(x);
        }
        for(auto x:t){
            t1+=tolower(x);
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;
    }
};
