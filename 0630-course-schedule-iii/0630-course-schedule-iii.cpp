class Solution {
public:
static bool cmp(vector<int>&a,vector<int>&b){
    return b[1]>a[1];
}
    int scheduleCourse(vector<vector<int>>& c) {
        sort(c.begin(),c.end(),cmp);
        priority_queue<int>pq;
        int t=0;
        for(auto it:c){
            
                if(t+it[0]<=it[1]){
                    t+=it[0];
                    pq.push(it[0]);
                }
                else {
                    if(!pq.empty() and pq.top()>=it[0]){
                    t=t-pq.top();
                    t+=it[0];
                    pq.pop();
                    pq.push(it[0]);
                }
            
            }
        }
        return pq.size();
    }
};