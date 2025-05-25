class Solution {
public:
    int solve(int n){
        int s=0;
        while(n>0){
            s+= ((n%10)*(n%10));
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        set<int>st;
        while(n!=1){
            if(st.find(n)!=st.end())return 0;
            st.insert(n);
            n=solve(n);
        }
    return n==1;
    }
};