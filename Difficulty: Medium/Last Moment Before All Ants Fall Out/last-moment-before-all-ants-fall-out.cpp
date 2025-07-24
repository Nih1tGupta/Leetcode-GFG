class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
         int maxLeft = 0;
        for (int pos : left) {
            maxLeft =max(maxLeft, pos);
        }

        int maxRight = 0;
        for (int pos : right) {
            maxRight =max(maxRight, n - pos);
        }

        return max(maxLeft, maxRight);
    }
};