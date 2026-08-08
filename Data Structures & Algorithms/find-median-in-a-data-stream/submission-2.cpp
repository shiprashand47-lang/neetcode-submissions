priority_queue<int> small;
priority_queue<int,vector<int>,greater<int>> large;
class MedianFinder {
public:
    MedianFinder() {
        while(!small.empty()){
            small.pop();
        }
        while(!large.empty()){
            large.pop();
        }
        
    }
    
    void addNum(int num) {
        small.push(num);

        if(!small.empty()&&!large.empty()&&small.top()>large.top()){
            int top=small.top();
            large.push(top);
            small.pop();
        }
        
            if(small.size()>large.size()){
                if(small.size()-large.size()>1){
                    int top=small.top();
                    large.push(top);
                    small.pop();
                }
            }else{
                if(large.size()-small.size()>1){
                int top=large.top();
                small.push(top);
                large.pop();
                }
            }
        
       
        
    }
    
    double findMedian() {
        cout<<small.size()<<" "<<large.size()<<endl;
       if(small.size()>large.size()){
        return small.top();
       }else if(large.size()>small.size()) {
            return large.top();
       }else{

            double ans=(double)(small.top()+large.top())/2;
            return ans;
       }
    }
};
