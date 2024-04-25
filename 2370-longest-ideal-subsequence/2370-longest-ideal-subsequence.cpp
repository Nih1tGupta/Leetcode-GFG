class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.length();int result=1;
        vector<int>v(26,0);
        int res=0;
        for(int i=0;i<n;i++){
            int curr= s[i]-'a'; int left = max(0,curr-k);int right=min(25,curr+k);
            int maxi=0;
            for(int j=left;j<=right;j++){
                maxi= max(maxi,v[j]);
            }
            v[curr]=max(v[curr],maxi+1);
            res = max(res,v[curr]);
        }
       return res;
    }
};