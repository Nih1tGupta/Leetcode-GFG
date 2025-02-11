class Solution {
public:
    // int maxDistance(string s, int k) {
         int f(char c) {
        if (c == 'N') return 0;
        if (c == 'S') return 1;
        if (c == 'E') return 2;
        if (c == 'W') return 3;
        return -1;
    }
    
    int getAns(vector<int> &cnt, int k) {
        int res = 0;
        {
            int mn = min(cnt[0], cnt[1]);
            int mx = max(cnt[0], cnt[1]);
            
            int del = min(mn, k);
            mx += del;
            mn -= del;
            k -= del;
            res += mx - mn;
        }
        {
            int mn = min(cnt[2], cnt[3]);
            int mx = max(cnt[2], cnt[3]);
            
            int del = min(mn, k);
            mx += del;
            mn -= del;
            k -= del;
            res += mx - mn;
        }
        return res;
    }
    
    int maxDistance(string s, int k) {
        int n = s.size();
        int ans = 0;
        vector<int> cnt(4);
        for (int i = 0; i < n; i++) {
            cnt[f(s[i])]++;
            ans = max(ans, getAns(cnt, k));
        }
        return ans;
    }
};