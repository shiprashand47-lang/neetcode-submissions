class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int n=prices.size();
        int i=0,j=i+1;
        while(i<j && j<n){
            if(prices[j]-prices[i]>=ans){
                ans=prices[j]-prices[i];
                j++;
            }
            else if(prices[j]-prices[i]<=0){
                i=j;
                j++;
            }else{
                j++;
            }
           
        }
        return ans;
    }
};
