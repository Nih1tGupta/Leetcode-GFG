class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int num=1;
        int top=0;int left=0;int right=n-1;int bottom=n-1;
        while(num<=n*n){
            for(int i=left;i<=right;i++){ans[top][i]=num;num++;}top++;
              for(int i=top;i<=bottom;i++){ans[i][right]=num;num++;}right--;
                for(int i=right;i>=left;i--){ans[bottom][i]=num;num++;}bottom--;
                  for(int i=bottom;i>=top;i--){ans[i][left]=num;num++;}left++;
        }
        return ans;
    }
};