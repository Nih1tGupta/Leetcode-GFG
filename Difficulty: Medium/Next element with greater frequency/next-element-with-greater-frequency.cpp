class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(auto it:arr){mp[it]++;}
        stack<int>st;
      int n=arr.size();
        vector<int>v(n,-1); 
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and mp[st.top()]<=mp[arr[i]]){st.pop();}
            if(!st.empty()){v[i]=st.top();}
            st.push(arr[i]);
        }
        return v;
    }
};
