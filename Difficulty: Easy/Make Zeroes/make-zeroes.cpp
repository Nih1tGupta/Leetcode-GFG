//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        vector<vector<int>>t=matrix;
        int n=matrix.size();int m=matrix[0].size();
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(matrix[i][j]==0){
                      int sum=0;
                      if(i-1>=0){sum+=matrix[i-1][j];t[i-1][j]=0;}
                       if(j-1>=0){sum+=matrix[i][j-1];t[i][j-1]=0;}
                        if(i<n-1){sum+=matrix[i+1][j];t[i+1][j]=0;}
                         if(j<m-1){sum+=matrix[i][j+1];t[i][j+1]=0;}
                         t[i][j]=sum;
                  }
                  
                  
                  
              }
          }
          matrix=t;
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
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends