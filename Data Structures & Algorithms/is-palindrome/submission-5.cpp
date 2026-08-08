class Solution {
public:
    bool isPalindrome(string s) {
        
        
        int i=0,j=0;
        string p="";
        while(s[i]!='\0'){
            if(s[i]>=65 && s[i]<=122||s[i]>=48&&s[i]<=57){
                p=p+(char)tolower(s[i]);
            }
            i++;
        }
        i=0;
        j=p.size()-1;
        while(i<=j){
            if(p[i]!=p[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};
