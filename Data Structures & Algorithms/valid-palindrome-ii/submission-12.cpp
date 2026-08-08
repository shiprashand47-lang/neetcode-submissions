class Solution {
public:
    bool pd(string s){
        int i=0,j=s.size()-1;
        
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(pd(s)) return true;
        int n=s.size();
        for(int i=0;i<n;i++){
            string t="";
            t=t+s.substr(0,i);
            t+=s.substr(i+1,n);
            if(pd(t)) return true;
        }
        return false;
    }
    
};