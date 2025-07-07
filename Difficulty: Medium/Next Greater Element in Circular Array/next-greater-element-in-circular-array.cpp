class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
         int n=arr.size();
        vector<int>v(n,-1);
       
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() and arr[i%n]>=st.top() ){
                st.pop();
            }
            if(i<n){v[i]=st.empty()?-1:st.top();}
            st.push(arr[i%n]);
        }
        return v;
    }
};