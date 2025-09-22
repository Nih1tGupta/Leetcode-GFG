class Solution {
  public:
    vector<int>solve_nse(int n,vector<int>&arr){
        vector<int>ans(n);
        ans[n-1]=n;
        stack<int>st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() and arr[st.top()]>=arr[i]){st.pop();}
            ans[i]=(st.empty()?n:st.top());
            st.push(i);
        }
        return ans;
    }
    
    
    vector<int>solve_pse(int n,vector<int>&arr){
        vector<int>ans(n);
        ans[0]=-1;
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++){
            while(!st.empty() and arr[st.top()]>arr[i]){st.pop();}
            ans[i]=(st.empty()?-1:st.top());
            st.push(i);
        }
        return ans;
    }
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
         int n = arr.size();
        //  BRUTE-> N^3 
        // BETTER-> N^2 (HAR EK ELEMENT KE LIYE -LEFT RIGH TJAO AUR UPDATE KARTE JAO)
        // OPTIMAL-> N : O(2n) (NSE AND PSE- AND DO THE SAME)
           
           vector<int>res(n,0);
          vector<int>nse= solve_nse(n,arr);
          vector<int>pse= solve_pse(n,arr);
          for(int i=0;i<n;i++){
              int len= nse[i]-pse[i]-1;
              res[len-1]=max(res[len-1],arr[i]);
          }
          for(int i=n-2;i>=0;i--){
              res[i]= max(res[i],res[i+1]);
          }
          return res;
    }
};