class Solution {
public:
 vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
typedef pair<int,pair<int,int>> P;
    int trapRainWater(vector<vector<int>>& h) {
        int m=h.size(); int n=h[0].size();
        priority_queue<P,vector<P>,greater<>>pq;
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        //  boundary row/col->
        for(int i=0;i<n;i++){
            pq.push({h[0][i],{0,i}});
            vis[0][i]=true;
        }
         for(int i=0;i<n;i++){
            pq.push({h[m-1][i],{m-1,i}});
             vis[m-1][i]=true;
        }
         for(int i=0;i<m;i++){
            pq.push({h[i][0],{i,0}});
             vis[i][0]=true;
        }
         for(int i=0;i<m;i++){
            pq.push({h[i][n-1],{i,n-1}});
             vis[i][n-1]=true;
        }
        int water=0;
        while(!pq.empty()){
             P PP =pq.top(); pq.pop();
            int he=PP.first;
            int r=PP.second.first;
            int c=PP.second.second;
            for(int i=0;i<4;i++){
                int nr=r+dir[i][0];
                int nc=c+dir[i][1];
                if(nr>=0 and nr<m and nc>=0 and nc<n and !vis[nr][nc]){
                    if(he>h[nr][nc]){water+=(he-h[nr][nc]);}
                
                    vis[nr][nc]=1;
                    int hnew=max(h[nr][nc],he);
                    pq.push({hnew,{nr,nc}});
                }
            }
        }
         return water;
    }
};