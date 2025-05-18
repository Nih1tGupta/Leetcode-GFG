class Solution {
public:
    bool isvalid(int i,int j,int n,int m,vector<string>&mat){
        if(i<0|| j<0 || i>=n|| j>=m)return 0;
        if(mat[i][j]=='#')return 0;
        return 1;
    }
    int minMoves(vector<string>& mat) {
        int n=mat.size();int m=mat[0].size();
        unordered_map<char,vector<pair<int,int>>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]!='.' and mat[i][j]!='#'){
                    mp[mat[i][j]].push_back({i,j});
                }
            }
        }
        if(mat[n-1][m-1]=='#')return -1;
          priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        // distacne to reach i,j  <=dis[i][j]
        unordered_set<char>st;  // teleport  wale ke liye
        pq.push({0,0,0});
        dis[0][0]=0;
        int dr[4]={0,0,-1,1};
        int dc[4]={-1,1,0,0};
        while(!pq.empty()){
            auto [dist,x,y]=pq.top(); pq.pop();
            if(dist>dis[x][y]){continue;}
            if(x==n-1 and y==m-1)return dist;
            // agar teleport wala mil gya toh
            if(isupper(mat[x][y]) and st.find(mat[x][y])==st.end()){
                st.insert({mat[x][y]});
                for(auto &[nx,ny] : mp[mat[x][y]]){
                    if(dis[nx][ny]>dist){
                        dis[nx][ny]=dist; 
                        pq.push({dist,nx,ny});                   
                    }
                }
            }
            for(int i=0;i<4;i++){
                int nr= x+dr[i]; int nc=y+dc[i];
                if(isvalid(nr,nc,n,m,mat) and dist+1<dis[nr][nc]){
                    dis[nr][nc]=dist+1;
                    pq.push({dist+1,nr,nc});
                }
            }
        }
        return -1;
    }
};