//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int n=image.size(); int m=image[0].size();
        int initialColor=image[sr][sc];
        if(initialColor==newColor)return image;
        int dir[4]={-1,0,1,0};
        int dic[4]={0,1,0,-1};
        vector<vector<int>>dup=image;
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        queue<pair<int,int>>q; // {currcolor,row,col}
        q.push({sr,sc});
        vis[sr][sc]=1;
        dup[sr][sc]=newColor;
        while(!q.empty()){
        auto curr = q.front();
        int row = curr.first;
        int col = curr.second;
    q.pop();
            for(int i=0;i<4;i++){
                int nr=row+dir[i]; int nc=col+dic[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && image[nr][nc]==initialColor){
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                    dup[nr][nc]=newColor;
                }
            }
        }
        return dup;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends