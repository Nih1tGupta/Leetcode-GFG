class Solution {
public:
bool isvowel(char c){
    if(c=='a' ||c=='e'||c=='i'||c=='o'||c=='u')return 1;
    return 0;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {
          int n = words.size();
        int cnt = 0;
        vector<int>pre(n,0);
        string ss=words[0];int z=ss.length();
        pre[0]=(isvowel(ss[0]) and isvowel(ss[z-1]))?1:0;
        for(int i=1;i<n;i++){
            string word=words[i];int m=word.size();
            if(isvowel(word[0]) and isvowel(word[m-1])){pre[i]=pre[i-1]+1;}
            else{pre[i]=pre[i-1]+0;}
        }
        int m=q.size();
            vector<int> ans(m, 0);
        for(int i=0;i<m;i++){
            int s=q[i][0]; int e=q[i][1];
            int put=pre[e]-(s>0?pre[s-1]:0);
            ans[i]=put;
        }
        return ans;
    }
};