class Solution {
public:
    bool check(string s1,string s2){
        int f=s1.length();
        int s=s2.length();
        if(f!=s+1)return 0;
        int i=0;int j=0;
        while(i<f){
            if(s1[i]==s2[j] and j<s){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
    return (i==f and j==s);
    }
    static bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}
    int longestStrChain(vector<string>& words) {
        int n=words.size();
       sort(words.begin(),words.end(),compare);
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(dp[j]+1>dp[i] and check(words[i],words[j])){
                    dp[i]= dp[j]+1;
                    maxi=max(maxi,dp[i]);
                }
            }
        }
    return maxi;
    }
};