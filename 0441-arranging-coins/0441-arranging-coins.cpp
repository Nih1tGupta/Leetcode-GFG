class Solution {
public:
    int arrangeCoins(int n) {
        int c=n;
        if(n==0){return 0;}
        if(n==1){return 1; }
       long long i=1;
            while(c>0){
              i++; c-=i;
            }
        
        return i-1;
    }
};