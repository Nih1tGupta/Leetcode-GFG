class Solution {
public:
    // vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
    //      int n = groups.size();
    // int m = elements.size();
    // vector<int> a(n, -1);
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (groups[i] % elements[j] == 0) {
    //             a[i] = j; 
    //             break; 
    //         }
    //     }
    // }
    // return a;
    void solve(int n , unordered_map<int,int>& m , vector<int>& ans){
        int k=INT_MAX;
        for(int i=1;i*i<=n;i++){
            if(n%i==0 and m.count(i)){
                k=min(k,m[i]);
            }

            if(i!=n/i and n%i==0 and m.count(n/i)){
                k=min(k,m[n/i]);
            }
            // N* root M
        }
        
        if(k!=INT_MAX) ans.push_back(k);
        else ans.push_back(-1);
    }
     vector<int> assignElements(vector<int>& g, vector<int>& e) {
             int n = g.size();
     int m = e.size();
      unordered_map<int,int>mp;
      for(int i=0;i<m;i++){
        if(mp.count(e[i])==0)mp[e[i]]=i;
      }
      vector<int>ans;
      for(int i=0;i<n;i++){
        solve(g[i],mp,ans);
      }
      return ans;
    }
};