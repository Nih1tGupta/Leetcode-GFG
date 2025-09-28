class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long x1=0;
        while(x>0){
            int rem=x%10;
            x1=(long long)x1*10+rem;
            x/=10;
        }
        return (x1==num);
    }
};