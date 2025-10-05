class Solution {
  public:
     bool isvalid(int i,int j,vector<vector<int>>&mat,vector<vector<bool>>&vis,int n){
      if(i>=0 and j>=0 and i<n and j<n and vis[i][j]==0 and mat[i][j]==1)return 1;
      return 0;
  }
    void solve(int i,int j,string s,vector<string>&ans,vector<vector<int>>&mat,vector<vector<bool>>&vis,int n){
        if(i==n-1 and j==n-1){
            ans.push_back(s);
            return;
        }
        vis[i][j]=1;
        // D L R U
        if (isvalid(i+1,j,mat,vis,n)){
            s.push_back('D');
            solve(i+1,j,s,ans,mat,vis,n);
            s.pop_back();
        }
         if (isvalid(i,j-1,mat,vis,n)){
            s.push_back('L');
            solve(i,j-1,s,ans,mat,vis,n);
            s.pop_back();
        }
         if (isvalid(i,j+1,mat,vis,n)){
            s.push_back('R');
            solve(i,j+1,s,ans,mat,vis,n);
            s.pop_back();
        }
         if (isvalid(i-1,j,mat,vis,n)){
            s.push_back('U');
            solve(i-1,j,s,ans,mat,vis,n);
            s.pop_back();
        }
        vis[i][j]=0;
    }
    vector<string> ratInMaze(vector<vector<int>> &mat) {
        int n=mat.size();
        vector<vector<bool>>vis(n,vector<bool>(n,0));
        int r=0;int c=0;
        string temp="";
        vector<string>ans;
        if(mat[r][c]==0)return ans;
        solve(r,c,temp,ans,mat,vis,n);
        return ans;
        // code here
        
    }
};