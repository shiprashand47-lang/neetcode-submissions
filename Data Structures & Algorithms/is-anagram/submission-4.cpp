class Solution {
public:
    bool isAnagram(string s, string t) {
       
       unordered_map<char,int> s1;
       unordered_map<char,int> t1;
       int i=0;
       while(s[i]!='\0'){
        s1[s[i]]++;
        i++;
       }
       i=0;
       while(t[i]!='\0'){
        t1[t[i]]++;
        i++;
       }
       if(s1.size()!=t1.size()) return false;
       for(auto x:s1){
         if(t1.find(x.first)==t1.end()) return false;
         if(t1[x.first]!=x.second) return false;
       }
       return true;

    }
};
