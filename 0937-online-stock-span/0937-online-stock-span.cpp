class StockSpanner {
public:

    stack<pair<int,int>>st;
    int idx;
    StockSpanner() {
        idx=-1;
    }
    //   vector<int>v;
 
    int next(int price) {
        // int c=0;
        // v.push_back(price);
        // int i=v.size()-1;
        // while(i>=0 and v[i]<=price){c++;i--;}
        // return c;
        idx=idx+1;
        int c=0;
        while(!st.empty() and price>=st.top().first){st.pop();}
        c=idx- (st.empty()?-1:st.top().second);
        st.push({price,idx});
        return c;
        

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */