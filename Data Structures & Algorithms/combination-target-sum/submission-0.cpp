class Solution {
public:
    void func(vector<int> &nums,vector<int> &temp,vector<vector<int>>& ans,int start,int target){

        if(start==nums.size()) return;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target-nums[start]>=0){
            temp.push_back(nums[start]);
            func(nums,temp,ans,start,target-nums[start]);
            temp.pop_back();
        }
        
        func(nums,temp,ans,start+1,target);
        return;

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
     
        vector<int> temp;
        vector<vector<int>> ans;
        func(nums,temp,ans,0,target);
        return ans;
    }
};
