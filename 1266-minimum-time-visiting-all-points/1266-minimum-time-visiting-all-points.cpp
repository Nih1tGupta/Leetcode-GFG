class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count=0;
        auto p1=points[0];
        for(int i=1;i<points.size();i++){
           auto p2=points[i];
            int a=p2[0]-p1[0];
            int b=p2[1]-p1[1];
            count+=max(abs(a),abs(b));
            p1=p2;
        }return count;
    }
};