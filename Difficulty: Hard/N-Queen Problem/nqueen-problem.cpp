//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void help(vector<vector<int>>&v,vector<vector<int>>&board,int n){
        vector<int>t;
        for(int c=0;c<n;c++){
            for(int r=0;r<n;r++){
                if(board[r][c]==1){
                    t.push_back(r+1);
                }
            }
        }
        v.push_back(t);
    }
    bool issafe(int c,int r,vector<vector<int>> &board, int n){
        int x=r;int y=c;
        while(r>=0 and c>=0){
            if(board[r][c]==1){return false;}
            r--;c--;
        }
        r=x;
        c=y;
         while(r<n and c>=0){
            if(board[r][c]==1){return false;}
            r++;c--;
        }
        r=x;c=y;
        while(c>=0){
            if(board[r][c]==1){return 0;}
            c--;
        }
        return 1;
    }
    void solve(int col,vector<vector<int>>&v,vector<vector<int>>&board,int n){
        if(col==n){
            help(v,board,n);
            return;
        }
        for(int r=0;r<n;r++){
            if(issafe(col,r,board,n)){
                board[r][col]=1;
                solve(col+1,v,board,n);
                board[r][col]=0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>v;
        vector<vector<int>>board(n,vector<int>(n,0));
        solve(0,v,board,n);
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends