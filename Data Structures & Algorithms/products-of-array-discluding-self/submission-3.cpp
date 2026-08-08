class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        int res=nums[0];
        int zerocnt=0;
        vector<int> ans(n,0);
        for(int i=1;i<n;i++){
            if(nums[i]!=0)
            res*=nums[i];
            else zerocnt++;
        }
        if(zerocnt>1) return ans;
        for(int i=0;i<n;i++){
            if(zerocnt>0)
            ans[i]=(nums[i]==0)?res:0;
            else{
                ans[i]=res/nums[i];
            } 
        }
        return ans;

    }
};
