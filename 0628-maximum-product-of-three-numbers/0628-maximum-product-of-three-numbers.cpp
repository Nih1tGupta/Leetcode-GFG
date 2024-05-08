class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int m1 = INT_MAX;
        int m2 = INT_MAX;

        int M1 = INT_MIN;
        int M2 = INT_MIN;
        int M3 = INT_MIN;

        for(int n : nums) {
            if(n < m1) {
                m2 = m1;
                m1 = n;
            } else if(n < m2) {
                m2 = n;
            }

            if(n > M1) {
                M3 = M2;
                M2 = M1;
                M1 = n;
            } else if(n > M2) {
                M3 = M2;
                M2 = n;
            } else if(n > M3) {
                M3 = n;
            }
        }
        return max(M1 * m1 * m2, M1 * M2 * M3);
    }
};