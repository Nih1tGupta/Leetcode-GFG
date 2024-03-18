class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>rowOne(m,0);
          vector<int>colOne(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){rowOne[i]+=1;colOne[j]+=1;}
            }
        }
        vector<vector<int>>diff(m,vector<int>(n,0));
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               int  onesRowi = rowOne[i];
               int  zerosRowi  = m-onesRowi;
               int onesColj= colOne[j];
               int  zerosColj = n-onesColj;
               diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj;
            }
              
         }
        

        return diff;
    }
};
