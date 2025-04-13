class Solution {
public:
    const int M=1e9+7;
    long long poww(long long x,long long n){
        long long ans=1;
        while(n>0){
            if(n%2==0){
                x=(x*x)%M;n/=2;
            }
            else{
                ans=(ans*x)%M;n-=1;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        return (long long)poww(5,(n+1)/2)*poww(4,n/2)%M;
    }
};