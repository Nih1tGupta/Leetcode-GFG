class Solution {
public:
    long long coloredCells(int n) {
        long long b=1;
        long long d=4;
        while(--n){
            b+=d;d+=4;
        }
        return b;
    }
};