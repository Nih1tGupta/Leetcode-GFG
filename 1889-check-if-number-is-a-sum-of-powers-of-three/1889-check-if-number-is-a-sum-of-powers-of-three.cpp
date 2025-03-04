class Solution {
public:
    bool solve(int n,int p){
        if(n==0)return 1;
        if(n<0||pow(3,p)>n)return 0;
        return solve(n-pow(3,p),p+1) || solve(n,p+1);
    }
    bool checkPowersOfThree(int n) {
       return solve(n,0);
    }
};