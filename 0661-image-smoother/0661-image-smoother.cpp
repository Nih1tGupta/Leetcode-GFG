class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int m = img.size(), n = img[0].size();
        vector<vector<int>> smoothedImg(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        {
            int rowSum = 0;
            for(int j = 0; j < n; j++)
            {
                rowSum += img[i][j];
                img[i][j] = rowSum;
                if(i > 0)
                    img[i][j] += img[i - 1][j];
            }
        }

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int i1 = max(0, i - 1);
                int j1 = max(0, j - 1);
                int i2 = min(m - 1, i + 1);
                int j2 = min(n - 1, j + 1);
                int cells = (i2 - i1 + 1) * (j2 - j1 + 1);
                int sum = img[i2][j2];
                if(i1 - 1 >= 0)
                    sum -= img[i1 - 1][j2];
                if(j1 - 1 >= 0)
                    sum -= img[i2][j1 - 1];
                if(i1 - 1 >= 0 && j1 - 1 >= 0)
                    sum += img[i1 - 1][j1 - 1];
                
                smoothedImg[i][j] = sum / cells;
            }
        }

        return smoothedImg;
    }
};