class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int count = 1;
        int p = arr[0];
        int rate = n / 4;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == p) count++;
            else count = 1;

            if (count > rate) return p;
            p = arr[i];
        }
        return count;
    }
};