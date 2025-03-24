class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
    //    int maxi = 0;
    //   vector<bool> vis(days, 0);
    // for(const auto& it : meetings) {
    //     int start = it[0];   int end = it[1];
    //     for(int day = start; day <= end; day++) {vis[day-1] = 1; }
    // }
    // for(int day = 0; day < days; day++) {
    //     if(!vis[day]) { maxi++;}
    // }
    // return maxi;
    int n=meetings.size();
    sort(meetings.begin(),meetings.end());
    int end=0;
    int ct=0;
    for(int i=0;i<n;i++){
        int s_time=meetings[i][0];
        int e_time=meetings[i][1];
        if(s_time>end){ ct+=(s_time-end-1);}
        end=max(end,e_time);
    }
    if(ct<days){ct+=(days-end);}
    return ct;
    }
};