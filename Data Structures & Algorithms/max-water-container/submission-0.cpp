class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n=heights.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int waterheight=min(heights[i],heights[j]);
                int total=(j-i)*waterheight;
                if(total>maxi){
                    maxi=total;
                }
            }
        }
        return maxi;
    }
    
};
