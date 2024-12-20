//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int n=mat.size(); int m=mat[0].size();
        int t=0;int b=n-1;int l=0;int r=m-1;
        vector<int>v;int d=0;
        while(t<=b and l<=r){
            if(d==0){
                for(int i=l;i<=r;i++){v.push_back(mat[t][i]);}
                t++;
            }
            if(d==1){
                for(int i=t;i<=b;i++){v.push_back(mat[i][r]);}
                r--;
            }
            if(d==2){
                for(int i=r;i>=l;i--){v.push_back(mat[b][i]);}
                b--;
            }
            if(d==3){
                for(int i=b;i>=t;i--){v.push_back(mat[i][l]);}
                l++;
            }
            d++;
            d%=4;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends