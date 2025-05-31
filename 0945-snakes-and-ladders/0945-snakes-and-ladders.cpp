class Solution {
public:
    pair<int,int> solve(int num,int n){
        int rft=(num-1)/n;
        int rfb= (n-1)-rft;
        // col
        int cft=(num-1)%n;
        if( (n%2 && rfb%2) || (n%2==0 && rfb%2==0)){cft=(n-1)-cft;}//rtl
    return make_pair(rfb,cft);
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        // 1 has 6 choices->
        // further 2 ke ,ya 3 ke explaore mat kero agar vis hai oth
        // bfs for min steps
        queue<int>q;
        int n=board.size();
        q.push(1);
        vector<vector<int>>vis(n,vector<int>(n,0));
        vis[n-1][0]=1;
        int steps=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int x=q.front(); q.pop();
                if(x==n*n){return steps;}
                for(int k=1;k<=6;k++){
                    if(x+k>n*n){break;}
                    int val=x+k;
                    pair<int,int>p=solve(val,n);
                    int r=p.first; int c=p.second;
                    if(vis[r][c]!=0){continue;}
                    if(board[r][c]==-1){
                        q.push(val);
                    }
                    else{
                        q.push(board[r][c]);
                    }
                vis[r][c]=1;
                }
            }
        steps++;
        }
    return -1;
    }
};