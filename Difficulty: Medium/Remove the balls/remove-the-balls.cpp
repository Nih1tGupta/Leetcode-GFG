class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        int N=color.size();
         stack<pair<int,int>>st;
        st.push({color[0],radius[0]});
        int i=1;
        
        while(i<N){
            if(!st.empty() && st.top().first==color[i] && st.top().second==radius[i])
            st.pop();
            
            else
            st.push({color[i],radius[i]});
            i++;
        }
        
        if(st.empty())
        return 0;
        
        return st.size();
    }
};