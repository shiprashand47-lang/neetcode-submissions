class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        int n=people.size();
        int i=0,j=n-1;
        int cnt=0;
        while(i<=j){
            if(i==j && people[i]<=limit){
                cnt++;
                break;
            }
            while(i<j&&people[i]==limit){
                cnt++;
                i++;
            }
            while(i<j&&people[j]==limit){
                cnt++;
                j--;

            }
            if(people[i]+people[j]<=limit){
                cnt++;
                i++;
                j--;
            }else if(people[i]+people[j]>limit){
                cnt++;
                j--;
            }
        }
        return cnt;
    }
};