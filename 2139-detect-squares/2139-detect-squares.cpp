class DetectSquares {
public:
    map<pair<int,int>,int>mp;
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        mp[{point[0],point[1]}]++;
    }
    
    int count(vector<int> p) {
        int ct=0;
        int x=p[0]; int y=p[1];
        for(auto t:mp){
            pair<int,int> it =t.first;
            if(it.first != x  && it.second !=y && ( abs(it.first-x) == abs(it.second-y)) ){
                int a= mp[ {it.first,it.second}];
                int b= mp[ {it.first,y}];
                int c= mp[ {x,it.second}];
                
                ct+=(a*b*c);
            }

        }
    return ct;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */