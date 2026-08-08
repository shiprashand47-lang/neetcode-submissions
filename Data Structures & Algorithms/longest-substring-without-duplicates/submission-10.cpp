class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i=0,j=i+1,cnt=1,ans=INT_MIN,n=s.size();
        mp[s[0]]=0;
        bool flag=false;
        if(n==0||n==1) return n;
        for(int i=0;i<n;i++){
            if(s[i]!=' ')
              flag=true;
            
        }
        if(flag==false) return 1;
        while(i<j && j<n){
            if(mp.find(s[j])!=mp.end()){
                i=i+1;
                mp.clear();
                mp[s[i]]=i;
                j=i+1;
                cnt=1;
            }else{
                mp[s[j]]=j;
                j++;
                cnt++;
            }
            if(cnt>ans) ans=cnt;
        }
        return ans;
    }
};
