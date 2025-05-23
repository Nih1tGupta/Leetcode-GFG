#define vi vector<int>
class Solution {
public:
    vi vis;
    bool helper(int i, vi &arr, int n) {
        if(i >= n || i < 0) {
            return false;
        }
        if(arr[i] == 0) {
            return true;
        }
        if(vis[i] == 1) {
            return false;
        }
        vis[i] = 1;
        int fj = i + arr[i];
        int bj = i - arr[i];

        return (helper(fj, arr, n) || helper(bj, arr, n));
    }
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vis.assign(n, 0);
        if(start >= n || start < 0) {
            return false;
        }
        return helper(start, arr, n);
    }
};