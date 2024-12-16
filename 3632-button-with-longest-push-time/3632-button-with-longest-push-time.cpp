class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int ans = 0, time = 0, last = 0;
    for(auto e: events) {
        if(e[1] - last > time || (e[1] - last == time && e[0] < ans)){
            time = e[1] - last;
            ans = e[0];
        }
        last = e[1];
    }
    return ans;
    }
};