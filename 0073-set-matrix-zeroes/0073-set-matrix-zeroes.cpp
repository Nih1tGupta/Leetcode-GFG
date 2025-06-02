class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        if(matrix[i][k]!=0){
                            matrix[i][k]=-201321;
                        }
                    }
                    for(int k=0;k<m;k++){
                        if(matrix[k][j]!=0){
                            matrix[k][j]=-201321;
                        }
                    }
                }
            }
        }
        //  for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             for(int k=0;k<m;k++){
        //                 if(matrix[k][j]!=0){
        //                     matrix[k][j]=-201321;
        //                 }
        //             }
        //         }
        //     }
        // }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-201321){
                            matrix[i][j]=0;
                        }
                    }
                }

    //     int n=matrix.size();
    //    int m=matrix[0].size();
    //     vector<int>row(n,0);
    //     vector<int>col(m,0);
    //    for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j]==0){
    //           row[i]=1;
    //           col[j]=1;
    //         }
    //     }
    //  }
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //        if(row[i] || col[j]){
    //         matrix[i][j]=0;
    //        }
    //     }
    //   }
    // int rows=matrix.size();
    //     int cols=matrix[0].size();
    //     int col0=1;
    //     for(int i=0;i<rows;i++){
    //         for(int j=0;j<cols;j++){
    //             if(matrix[i][j]==0){
    //                 // marking 0th row 
    //                 matrix[i][0]=0;
    //                 // marking 0th col
    //                 if(j!=0)
    //                     matrix[0][j]=0;
    //                 else
    //                     col0=0;
    //             }
    //         }
    //     }
    //     for(int i=1;i<rows;i++){
    //         for(int j=1;j<cols;j++){
    //             // by checking marker rows and making 0's
    //             if(matrix[i][0]==0||matrix[0][j]==0 ){
    //                 matrix[i][j]=0;
    //             }
    //         }
    //         // cout<<endl;
    //     }

    //     // now marker row 1st
    //     if(matrix[0][0]==0){
    //         for(int i=0;i<cols;i++){
    //             matrix[0][i]=0;
    //         }
    //     }

    //     // now marker col
    //     if(col0==0){
    //         for(int i=0;i<rows;i++){
    //             matrix[i][0]=0;
    //         }
    //     }

       
    }
};