class Solution {
public:
  int t[1001][1001];
    int n;
    
    static bool cmp(string &w1,string &w2){
            return w2.length()>w1.length();
    }
    bool ispre(string &prev,string &curr){
              int M = prev.length();
        int N = curr.length();
        
        if(M >= N || N-M != 1)
            return false;
        
        int i = 0, j = 0;
        while(i < M && j < N) {
            if(prev[i] == curr[j]) {
                i++;
            }
            j++;
        }
        return i==M;
    }
    
    int lis(vector<string>&words,int c,int p){
        if(c==n)return 0;
          if(p != -1 && t[c][p] != -1)
            return t[c][p];
        int tak=0;
        if(p==-1 || ispre(words[p],words[c])){
         tak=1+lis(words,c+1,c);
        }
         int nt=lis(words,c+1,p);
        if(p!=-1)t[c][p]=max(tak,nt);
        return max(tak,nt);
        
    }
    
    int longestStrChain(vector<string>& words) {
    memset(t,-1,sizeof(t));
        n=words.size();
      
        sort(words.begin(),words.end(),cmp);
        return lis(words,0,-1);
    }
};