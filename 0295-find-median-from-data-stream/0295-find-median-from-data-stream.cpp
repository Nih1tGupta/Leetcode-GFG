class MedianFinder {
public:
vector<int>v;

    MedianFinder() { 
    }
    
    void addNum(int num) {
        if(v.empty()){
        v.push_back(num);
        }
        else{
            auto it=v.begin();
            while(it!=v.end() and *it<num){
                it++;
            }
            v.insert(it,num);
        }
    }
    
    double findMedian() {
        int sz=v.size();
        if(sz%2==0){
            double ans = (v[sz/2]+v[sz/2-1])/2.0;
            return ans;
        }
        else{
        return v[sz/2];
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */