class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>& board, string word,int m,int n,vector<vector<int>>&vis,int dr[],int dc[],string s){
        // base
        if(s==word){return true;}
        if(i>=0 && i<m && j>=0 && j<n && !vis[i][j] &&board[i][j]==word[s.size()]){
            vis[i][j]=1;
            s.push_back(board[i][j]);
            for(int k=0;k<4;k++){
                int nr=i+dr[k]; int nc= j+dc[k];
                if(solve(nr,nc,board,word,m,n,vis,dr,dc,s)==true){return true;}
            }
        vis[i][j]=0;
        s.pop_back();
        }
    return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(); int n=board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int dr[]={1,0,0,-1};
        int dc[]={0,-1,1,0};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(solve(i,j,board,word,m,n,vis,dr,dc,"")==true){return 1;}
                }
            }
        }
    return 0;
    }
};