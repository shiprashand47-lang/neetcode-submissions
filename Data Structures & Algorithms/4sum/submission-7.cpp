class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> v;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=0,k=0,l=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){

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
                        s.insert(m);
                        k++;
                        
                        
                    }
                }
                
            }
        }
        for(auto x:s){
            v.push_back(x);
        }
        return v;
    }
};