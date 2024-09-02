//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
	vector<int>dr={0,1,-1,0};
vector<int>dc={1,0,0,-1};
 
bool valid (int r, int c, int n){
    if (r<0 || c<0) return false;
    if (r>=n || c>=n) return false;
    return true;
}
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
          int n= grid.size();
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        dist[0][0]= grid[0][0];
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;
        
        pq.push({grid[0][0],{0,0}});
        
        while (!pq.empty()){
            int curr= pq.top().first;
            int r= pq.top().second.first;
            int c= pq.top().second.second;
            pq.pop();
            for (int i=0; i<4; i++){
                int nr= r+dr[i];
                int nc= c+dc[i];
                //normalize the distance
                if (valid(nr,nc,n) && dist[nr][nc]>grid[nr][nc]+dist[r][c]){
                    dist[nr][nc]= grid[nr][nc]+dist[r][c];
                    pq.push({dist[nr][nc],{nr,nc}});
                }
            }
        }
        
        return dist[n-1][n-1];
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends