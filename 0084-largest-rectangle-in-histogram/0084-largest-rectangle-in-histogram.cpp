class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int maxi=0;int n=h.size();
        stack<int>st;
        for(int i=0;i<h.size();i++){
            while(!st.empty() and h[i]<h[st.top()]){
                int element=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty()?-1:st.top();
                maxi=max(maxi,h[element]*(nse-pse-1));
            }
            st.push(i);
        }
    // leftover -they have no nse;
    while(!st.empty()){
        int ele=st.top();
        int nse=n;
        st.pop();
        int pse=st.empty()?-1:st.top();
        maxi=max(maxi,h[ele]*(nse-pse-1));
    }
    return maxi;
    }
};