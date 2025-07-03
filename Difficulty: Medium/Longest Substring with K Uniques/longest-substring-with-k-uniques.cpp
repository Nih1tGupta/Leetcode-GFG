class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int len=0;int n=s.length();
        // for(int i=0;i<n;i++){
        //     unordered_set<char>st;
        //     for(int j=i;j<n;j++){
        //         st.insert(s[j]);
        //         if(st.size()==k){len=max(len,j-i+1);}
        //     }
        // }
        // return len==0?-1:len;
        int i=0;int j=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            if(mp.size()==k)len=max(len,j-i+1);
            j++;
        }
        return len==0?-1:len;
    }
};