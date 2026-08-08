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
        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());
        if(s1==t1) return true;
        return false;
    }
};
