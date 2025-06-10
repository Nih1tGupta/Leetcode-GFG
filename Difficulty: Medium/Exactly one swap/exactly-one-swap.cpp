class Solution {
  public:
    int countStrings(string &s) {
        // code here
    //     int n = s.length();
    // unordered_set<string> seen;
    // // Convert string to vector for easy swapping (optional)
    // for (int i = 0; i < n; ++i) {
    //     for (int j = i + 1; j < n; ++j) {
    //         swap(s[i], s[j]);      // swap characters at i and j
    //         seen.insert(s);        // store the new string in set
    //         swap(s[i], s[j]);      // revert the swap
    //     }
    // }
    // return seen.size(); 
    map<char,int>mp;
    for(int i=0;i<s.length();i++){mp[s[i]]++;}
    int ans=0; int flag=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(mp[s[i]]>1){flag=1;}
        ans+=(n-mp[s[i]]);
    }
    ans/=2;
    return ans+flag;
    }
};
