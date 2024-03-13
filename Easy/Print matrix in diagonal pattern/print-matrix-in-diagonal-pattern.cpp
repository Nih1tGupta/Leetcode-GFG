//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
       int n=mat.size(),up =1, i=0,j=0;
        vector<int>v;
        while(i<n && j<n)
        {
            if(up==1 && i>0 && j<n-1){
                v.push_back(mat[i][j]);
                i--;
                j++;
            }
            else if(up ==0 && i<n-1 && j>0){
                v.push_back(mat[i][j]);
                i++;
                j--;
            }
            else if(up ==1){
                if(j==n-1){
                   v.push_back(mat[i][j]);
                   i++;
                   up=0;
                }
                else if(j!=n-1){
                    v.push_back(mat[i][j]);
                     j++;
                     up=0;
                }
            }
            else if(up ==0){
                if(j==0 && i==n-1){
                    v.push_back(mat[i][j]);
                     j++;
                     up=1;
                }
                else if(j==0 && i!=n-1){
                    v.push_back(mat[i][j]);
                     i++;
                     up=1;
                }
                else if(j!=0){
                   v.push_back(mat[i][j]);
                   j++;
                   up=1;
                }}}
        return v;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends