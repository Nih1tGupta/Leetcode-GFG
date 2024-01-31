class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v(temperatures.size());   
        stack<int>st;
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() and temperatures[i]>temperatures[st.top()]){
            int top=st.top();
            st.pop();
            v[top]=i-top;
            }
            st.push(i); 
        }
        return v;
    }
};