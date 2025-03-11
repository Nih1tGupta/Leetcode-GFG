class Solution {
public:
    bool check(vector<int>&freq){
        return (freq[0]>0  and freq[1]>0 and freq[2]>0);
    }
    int numberOfSubstrings(string s) {
        int c=0;
        int n=s.length();
       int l=0;int r=0;
       vector<int>v(3,0);
       while(r<n){
        char ch=s[r];
        v[ch-'a']++;
        while(check(v)){
            c+=(n-r);
            char lchar=s[l];
            v[lchar-'a']--;
            l++;
        }
        r++;
       }
       return c;
    }
};