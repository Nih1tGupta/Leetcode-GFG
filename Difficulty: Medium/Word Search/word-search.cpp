//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int n,m;
    bool find(int i,int j,vector<vector<char>>&board,string word,int ind){
        if(ind == word.size()) return true;
        if(i < 0 || i >= n || j < 0 || j >= m || board[i][j] == '$') return false;
        if(board[i][j] != word[ind]) return false;
        char temp = board[i][j];
        board[i][j] = '$';
        if(find(i+1,j,board,word,ind+1) || find(i-1,j,board,word,ind+1) || find(i,j+1,board,word,ind+1) || find(i,j-1,board,word,ind+1)){
            return true;
        }
        board[i][j] = temp;
        return false;
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
         n = mat.size();
        m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == word[0] && find(i,j,mat,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends