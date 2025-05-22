class MinStack {
public:
 stack<long long>st;
    long long mini = INT_MAX,el;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
           st.push(val); 
           mini = val;

        } 
        else {
            if(val>mini) st.push(val);
            else{
                          
                st.push( (val - mini+val));
                 mini = val;
            }
         }
    }
    
    void pop() {
       
        if(st.empty()) return ;
        long long el = st.top();
        st.pop();
        if(el<mini){
            mini = (2*mini) - el;
        }
        
    }
    
    int top() {
         if(st.empty()) return INT_MAX;
         long long el = st.top();
        if(el>mini){
           return el;
        }
         return mini;
    }
    
    int getMin() {
       return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */