//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    private:
    void cofactor(vector<vector<int>>&matrix,vector<vector<int>>&temp,int R,int C,int n){
        int i=0,j=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(row!=R and col!=C){
                    temp[i][j]=matrix[row][col];
                    j++;
                    if(j==n-1){
                        j=0;i++;
                    }
                }
            }
            
        }
    }
         
         
         
         
     
    public:
    
    
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        if(n==1){return matrix[0][0];}
        if(n==2){return matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];}
        int mul=1;int ans=0;
        vector<vector<int>>temp(n,vector<int>(n));
        for(int i=0;i<n;i++){ 
          cofactor(matrix,temp,0,i,n);
          ans+= mul*matrix[0][i]*determinantOfMatrix(temp,n-1);
          mul*=-1;
    }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends