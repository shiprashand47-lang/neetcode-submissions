class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int size=temperatures.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(temperatures[j]>temperatures[i]){
                    ans[i]=j-i;
                    break;
                }
            }
        }
        return ans;
    }
};
