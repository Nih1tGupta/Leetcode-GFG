class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& q) {
        int n=s.length();
        vector<int>d(n,0);
        for(auto it:q){
            int s=it[0]; int e=it[1]; int dir=it[2];int x;
            if(dir==0){x=-1;}
            if(dir==1){x=1;}
            d[s]+=x;
            if(e+1<n){d[e+1]-=x;}
        }
        for(int i=1;i<n;i++){d[i]=d[i-1]+d[i];}
        for(int i=0;i<n;i++){
            int move=d[i]%26;
            if(move<0){move+=26;}
            s[i]=( (s[i]-'a')+move)%26+'a';
        }
        return s;
    }
};