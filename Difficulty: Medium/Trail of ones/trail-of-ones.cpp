class Solution {
  public:
    // int ct=0;
    // int solve(int i,int c,int mc,int n){
    //     if(i==n){
    //         if(mc>=2)return 1;
    //         return 0;
    //     }
    //     int a=solve(i+1,0,mc,n);
    //     int nc=c+1;
    //      int b=solve(i+1,nc,max(mc,nc),n);
    //      return a+b;
    // }
    int countConsec(int n) {
        // code here
        // return solve(0,0,0,n);
        // idx,cons,max_cons,n;
        // return ct;
        int a=1,b=2;
        for(int i=2;i<=n;i++)
        {
            int tmp=b;
            b=a+b;
            a=tmp;
        }
        return pow(2,n)-b;
    }
};