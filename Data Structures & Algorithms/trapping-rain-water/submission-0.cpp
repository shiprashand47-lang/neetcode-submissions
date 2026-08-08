class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int total=0;
        int prefix[n]={0};
        int suffix[n]={0};
        prefix[0]=height[0];
        suffix[n-1]=height[n-1];
        for(int i=1;i<n;i++){

            if(height[i]>prefix[i-1]){
                prefix[i]=height[i];
            }else{
                prefix[i]=prefix[i-1];
            }

        }
        for(int i=n-2;i>=0;i--){
            if(height[i]>suffix[i+1]){
                suffix[i]=height[i];
            }else{
                suffix[i]=suffix[i+1];
            }
        }

        for(int i=0;i<n;i++){

            total+=min(prefix[i],suffix[i])-height[i];
        }
        return total;
    }
};
