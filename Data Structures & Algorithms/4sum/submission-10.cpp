class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> v;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=0,k=0,l=0;
        for(i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                k=j+1;
                l=n-1;
                while(k<l){
                    long long sum;
                    sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum>target){
                        l--;
                    }else if(sum<target){
                        k++;
                    }else{
                        
                        vector<int> m;
                        m.push_back(nums[i]);
                        m.push_back(nums[j]);
                        m.push_back(nums[k]);
                        m.push_back(nums[l]);
                       // s.insert(m);
                        v.push_back(m);
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k - 1]) k++;
                        while (k < l && nums[l] == nums[l + 1]) l--;

                        
                        
                    }
                }
                
            }
        }
       // for(auto x:s){
         //   v.push_back(x);
       // }
        return v;
    }
};