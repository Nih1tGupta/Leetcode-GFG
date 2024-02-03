class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1;
        int high = n;
        long long k = 0;
        while(low <= high){
            k = low + (high - low) / 2;
            long long m = k*(k+1)/2;
            if (m== n) return k;
            else if(m > n) high =  k - 1;
            else low = k + 1;
        }
        return high;
    }
};