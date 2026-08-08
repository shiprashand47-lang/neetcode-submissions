class Solution {
public:
    void func(vector<int>& nums,vector<vector<int>> &ans,vector<int> temp,int start,int end){

       // if(start>end) return;
        if(start>end) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[start]);
        func(nums,ans,temp,start+1,end);
        temp.pop_back();
        func(nums,ans,temp,start+1,end);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        func(nums,ans,temp,0,n-1);
        return ans;
        
    }
};
