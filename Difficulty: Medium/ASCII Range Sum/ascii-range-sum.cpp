class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        int n=s.length();
        
        vector<int>pre(n,0);
        pre[0]=(int)s[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+(int)s[i];
        }
        
        vector<int>ans;
        
        unordered_map<char,pair<int,int>>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){mp[s[i]].first=i;}
            mp[s[i]].second=i;
        }
       for (auto it = mp.begin(); it != mp.end(); ++it) {
        char ch = it->first;
        int first = it->second.first;
        int last = it->second.second;
    
    if (first != last && last - first > 1) {
        int sum_between = pre[last - 1] - pre[first];
        ans.push_back(sum_between);
    }
}
        return ans;
    }
};