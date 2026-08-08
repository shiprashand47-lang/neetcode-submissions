class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        while(k>n){
            k=k-n;
        }
        int i=0,j=n-k-1;
        while(i<j){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            i++;j--;
        }
        i=n-k,j=n-1;
        while(i<j){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            i++;j--;
        }
        i=0,j=n-1;
        while(i<j){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            i++;j--;
        }

    }
};