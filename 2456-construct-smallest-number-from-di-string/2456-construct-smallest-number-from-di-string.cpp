class Solution {
public:
    bool match(string &p,string &s){
        for(int i=0;i<p.length();i++){
            if( (p[i]=='I' and s[i]>s[i+1]) || (p[i]=='D' and s[i]<s[i+1]) ){return 0;}
        }
        return 1;
    }
    string smallestNumber(string pattern) {
        string ss="";
        int n=pattern.length();
        for(int i=1;i<=n+1;i++){
            ss.push_back(i+'0');
        }
        while(!match(pattern,ss)){
            next_permutation(begin(ss),end(ss));
        }return ss;
    }
};