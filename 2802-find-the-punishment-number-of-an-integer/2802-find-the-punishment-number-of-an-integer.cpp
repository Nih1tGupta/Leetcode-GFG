class Solution {
public:
    bool solve(string &numstr,int n){
        return solve2(numstr,n,0,0);
    }
    bool solve2(string &x,int tar,int st,int cs){
        // base
        if(cs>tar)return 0;
        // it reached end
        if(st==x.length()){
            if(cs==tar)return 1;
        }
        // backtrack
        for(int j=st+1;j<=x.length();j++){
            // get substring --> now stoi
            string ss=x.substr(st,j-st);
            int haha=stoi(ss);
            if(solve2(x,tar,j,cs+haha)){return 1;}
        }
        return 0;
    }
    int punishmentNumber(int n) {
        // vo number jinka square -->split-->sum==number only
        // check for all
        int c=0;
        for(int i=1;i<=n;i++){
              string a=to_string(i*i);
            if(solve(a,i)){c+=(i*i);}
        }
        return c;
    }
};