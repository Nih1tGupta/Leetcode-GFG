class Solution {
public:
    int pivotInteger(int n) {
        int total= n*(n+1)/2;
        for(int i=1;i<=n;i++){
             int lsum= i*(i+1)/2;
            int rsum= total-lsum+i;
            if(lsum==rsum){return i;}
        }
       return -1;
        
    }
};