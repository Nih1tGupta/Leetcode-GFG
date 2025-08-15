class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
         vector<vector<int>>v;
        int n=intervals.size();int i=0;
        while(i<n && newInterval[0]>intervals[i][1]){
            v.push_back(intervals[i]);
            i++;
        }
       while(i<n and newInterval[1]>=intervals[i][0]){
           newInterval[0]=min(newInterval[0],intervals[i][0]);
           newInterval[1]=max(newInterval[1],intervals[i][1]);
       i++;
       }
       v.push_back(newInterval);
       while(i<n and newInterval[1]<intervals[i][0]){v.push_back(intervals[i]);i++;}
        return  v;
        
    }
};