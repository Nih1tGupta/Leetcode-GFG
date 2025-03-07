class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int n=s.length();
       int len=0;int l=0;
       unordered_set<char>st;
       for(int r=0;r<n;r++){
            if(st.count(s[r])==0){
                st.insert(s[r]);
                maxi=max(maxi,r-l+1);
            }
            else{
                while(st.count(s[r])){
                    st.erase(s[l]);l++;
                }
            }
            st.insert(s[r]);
       }
      return maxi;
    }
};