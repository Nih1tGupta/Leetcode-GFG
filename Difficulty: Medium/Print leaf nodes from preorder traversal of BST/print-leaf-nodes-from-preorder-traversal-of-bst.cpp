class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        vector<int>v;
        stack<int>st;
        st.push(preorder[0]);
        int n=preorder.size();
        for(int i=1;i<n;i++){
            if(st.top()>preorder[i]){st.push(preorder[i]);}
            else{
                int temp=st.top();
                int rem=0;
                while(!st.empty() and preorder[i]>st.top()){st.pop();rem++;}
                st.push(preorder[i]);
                if(rem>=2){v.push_back(temp);}
            }
        }
        v.push_back(preorder[n-1]);
        return v;
    }
};