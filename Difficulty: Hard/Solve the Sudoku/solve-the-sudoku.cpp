//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a solved Sudoku.
    bool solve(vector<vector<int>> &mat){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    for(int c=1;c<=9;c++){
                        if(check(i,j,mat,c)){
                        mat[i][j]=c;
                        if(solve(mat)==true)return true;
                        else{mat[i][j]=0;}
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool check(int r,int c,vector<vector<int>>&mat,int val){
        for(int i=0;i<9;i++){
            if(mat[i][c]==val)return 0;
            if(mat[r][i]==val)return 0;
            if(mat[3*(r/3)+i/3][3*(c/3)+i%3]==val)return 0;
        }
        return 1;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        solve(mat);
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends