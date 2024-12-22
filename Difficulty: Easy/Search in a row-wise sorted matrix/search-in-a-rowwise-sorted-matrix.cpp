//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool f(vector<int>row,int x){
         int l=0;int h=row.size()-1;
        while(l<=h){
            int m= l+(h-l)/2;
            if(row[m]==x)return true;
            if(row[m]<x){l=m+1;}
            else{h=m-1;}
        }
        return false;
    }
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        for(auto row:mat) { 
            if(f(row, x)){ return true; } 
        } 
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends