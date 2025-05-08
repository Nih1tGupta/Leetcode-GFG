class Solution {
public:
    typedef pair<int,pair<int,int>> P;
    int minTimeToReach(vector<vector<int>>& mt) {
        int n=mt.size();
        int m=mt[0].size();
        vector<vector<int>>v(n,vector<int>(m,INT_MAX));
        priority_queue<P,vector<P>,greater<P>>pq;
        vector<vector<int>>dir{{0,1},{0,-1},{-1,0},{1,0}};
        v[0][0]=0;
        pq.push({0,{0,0}});

        while(!pq.empty()){
            int curr_time=pq.top().first;
            pair<int,int> cell=pq.top().second;
            int r=cell.first;
            int c=cell.second;
            pq.pop();
            if(r==n-1 and c==m-1){return curr_time;}
            for(auto it:dir){
                int nr=r+it[0]; int nc=c+it[1];
                if(nr>=0 && nr<n && nc>=0 && nc<m){
                    int x=(nr+nc);int a=1;
                    if(x%2==0){a=2;}
                    int wait_time= max(0,mt[nr][nc]-curr_time);
                    int arr_time= wait_time+ curr_time +a;
                    if(v[nr][nc]>arr_time){
                        v[nr][nc]=arr_time;
                        pq.push({arr_time,{nr,nc}});
                        }
                }
            }
        }
        return -1;
        
    }
};