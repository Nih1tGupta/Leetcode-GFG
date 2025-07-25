class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
    string smallestWindow(string &s, string &t) {
         unordered_map<char,int>mp;
        for(char ch:t){mp[ch]++;}
        int n=s.length();
        if(t.length()>n)return "";
        int mini=INT_MAX;
        int ct=t.length();
        int i=0;int j=0;int idx=0;
        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){ct--;}
            mp[ch]--;
            while(ct==0){
                if(j-i+1<mini){mini=j-i+1;idx=i;}
                mp[s[i]]++;
                if(mp[s[i]]>0){ct++;}
                i++;
            }
            j++;
        }
        return mini==INT_MAX?"":s.substr(idx,mini);
        
    }
};