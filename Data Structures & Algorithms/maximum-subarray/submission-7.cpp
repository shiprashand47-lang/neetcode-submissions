class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n=nums.size();
        int i=1,j=n-1;
        int sum=nums[0],maxi=nums[0];
        while(i<n){
            sum=max(sum+nums[i],nums[i]);
            
            maxi=max(sum,maxi);
            i++;
        }
        return maxi;
    }
};
