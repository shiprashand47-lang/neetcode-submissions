class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==1){
                return true;
            }
            mp[arr[i]]=1;
        }
        return false;
    }
};
