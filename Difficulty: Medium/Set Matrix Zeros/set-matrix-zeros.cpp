class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();int m=mat[0].size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(mat[i][j]==0){
        //             for(int k=0;k<m;k++){if(mat[i][k]!=0)mat[i][k]=-90121;}
        //             for(int l=0;l<n;l++){if(mat[j][l]!=0)mat[l][j]=-90121;}
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(mat[i][j]==-90121)mat[i][j]=0;
        //     }
        // }
        
        // ************BETTER*****************
        
        // vector<int>r(n,0); vector<int>c(m,0);
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(mat[i][j]==0){r[i]=1; c[j]=1;}
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(r[i] || c[j])mat[i][j]=0;
        //     }
        // }
        
        // ************OPTIMAL****************
         int col0 =1;
        for(int i =0;i<n;i++){
            for(int j= 0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                     mat[i][0] = 0;
                       if (j!=0)
                          mat[0][j] = 0;
                          
                          else col0 =0;
                      
                     
                }
                
            }
        }
        for(int i = 1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][j]!=0){
                if( mat[i][0] ==0 || mat[0][j] ==0){
                    mat[i][j] = 0;
                }
            }}
        }
        if(mat[0][0] == 0){
            for(int j=0;j<m;j++){
            mat[0][j]=0;
        }}
        if(col0 == 0){
            for(int i=0;i<n;i++){
                mat[i][0] = 0;
            }
        }
        
    }
};