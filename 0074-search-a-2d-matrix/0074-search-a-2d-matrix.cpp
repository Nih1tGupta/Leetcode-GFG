class Solution {
public:
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //       int m=matrix[0].size();int n=matrix.size();
    // int l=0;int h=n*m-1;
    //     while(l<=h){
    //         // flatten 2d in1d, we are getting value(ro2,col) from idx
    //         int mid = (l+h)/2;
    //         int row=mid/m;int col=mid %m;
    //         if(matrix[row][col]==target){return true;}
    //         else if(matrix[row][col]<target){l=mid+1;}
    //         else{h=mid-1;}
    //     }
    //     return false;


    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Binary search on rows
        int top = 0, bottom = m - 1;
        int row = -1;

        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
                row = mid;
                break; // Found the potential row
            } else if (target < matrix[mid][0]) {
                bottom = mid - 1;
            } else {
                top = mid + 1;
            }
        }

        // No such row found
        if (row == -1) return false;

        // Binary search in the identified row
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        return false;
    }


    
};