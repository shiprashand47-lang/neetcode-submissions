class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        set<vector<int>> ans;
        vector<vector<int>> ans1;

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    ans.insert(v);
                   j++;
                }
            }
        }
        for(auto x:ans){
          ans1.push_back(x);
        }
        return ans1;
    }
};
