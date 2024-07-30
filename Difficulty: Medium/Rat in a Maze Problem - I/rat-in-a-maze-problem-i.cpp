//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isvalid(vector<vector<int>> m,int i,int j,vector<vector<int>>&visited,int n){
        if(i>=0&&i<n&&j>=0&&j<n&&visited[i][j]==0&&m[i][j]==1)
        return true;
        
        
        return false;
    }
    void solve(vector<vector<int>> m,int i,int j,vector<vector<int>>&visited,int n,
    string temp,vector<string>&ans){
        if(i==n-1&&j==n-1){
            ans.push_back(temp);
            return ;
        }
        
        visited[i][j]=1;
        
        if(isvalid(m,i+1,j,visited,n)){
            temp.push_back('D');
            solve(m,i+1,j,visited,n,temp,ans);
            temp.pop_back();
            
        }                    //down
        
        if(isvalid(m,i-1,j,visited,n)) {
            temp.push_back('U');
            solve(m,i-1,j,visited,n,temp,ans);
            temp.pop_back();
        }                    // up
        
        if(isvalid(m,i,j+1,visited,n))  {
            temp.push_back('R');
            solve(m,i,j+1,visited,n,temp,ans);
            temp.pop_back();
        }                    // right
        
        if(isvalid(m,i,j-1,visited,n)) {      // left
            temp.push_back('L');
            solve(m,i,j-1,visited,n,temp,ans);
            temp.pop_back();
        } 
       visited[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n=mat.size();
         vector<vector<int>>visited(n,vector<int>(n,0));
        string temp="";
        vector<string>ans;
        int sr=0; int sc=0;
        if(mat[sr][sc]==0)
        return ans;

        solve(mat,sr,sc,visited,n,temp,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends