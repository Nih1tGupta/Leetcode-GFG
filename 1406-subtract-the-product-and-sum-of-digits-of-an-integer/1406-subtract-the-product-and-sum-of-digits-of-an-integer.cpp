class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;int sum=0;
        while(n>0){
            int rem=n%10;n=n/10;
            sum+=rem;
            pro*=rem;
        }
        return pro-sum;}
        
};