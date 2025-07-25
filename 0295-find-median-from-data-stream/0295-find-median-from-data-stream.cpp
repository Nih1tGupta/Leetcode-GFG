class MedianFinder {
public:
    MedianFinder() {
        
    }
    priority_queue<int,vector<int>>left;
    priority_queue<int,vector<int>,greater<int>>right;

    void addNum(int num) {
        if(left.empty() || left.top()>num){left.push(num);}
        else{right.push(num);}

        if(left.size()>right.size()+1){
            right.push(left.top());
            left.pop();
        }
        else if(right.size()>left.size()){
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {
        if(left.size()==right.size()){
            return (double)(left.top()+right.top())/2.0;
        }
        return left.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */