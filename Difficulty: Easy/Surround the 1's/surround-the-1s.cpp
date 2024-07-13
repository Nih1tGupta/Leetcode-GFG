//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int res=0;
        int n=matrix.size(); int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    int z=0;
                    if(i-1>=0){ z+=(matrix[i-1][j]==0)?1:0; }
                    if(i+1<n){ z+=(matrix[i+1][j]==0)?1:0; }
                    if(j-1>=0){ z+=(matrix[i][j-1]==0)?1:0; }
                    if(j+1<m){ z+=(matrix[i][j+1]==0)?1:0; }
                    
                    if(i-1>=0 and j-1>=0){ z+=(matrix[i-1][j-1]==0)?1:0; }
                    if(i-1>=0 and j+1<m){ z+=(matrix[i-1][j+1]==0)?1:0; }
                    if(i+1<n and j-1>=0){ z+=(matrix[i+1][j-1]==0)?1:0; }
                    if(i+1<n and j+1<m){z+=(matrix[i+1][j+1]==0)?1:0;}
                    
                     if (!(z & 1) && z)
                        res++;
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends