class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
         int l=0;int maxi=0;
        int idx=0;
        multiset<int>st;
        for(int r=0;r<arr.size();r++){
            st.insert(arr[r]);
            while(*st.rbegin()-*st.begin()>x){
                st.erase(st.find(arr[l]));
                l++;
            }
            if(r-l+1>maxi){
                maxi=r-l+1;
                idx=l;
            }
       }
       return vector<int>(arr.begin()+idx,arr.begin()+idx+maxi);
    }
};