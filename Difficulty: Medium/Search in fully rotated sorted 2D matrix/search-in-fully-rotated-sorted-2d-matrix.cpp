class Solution {
  public:
    int searchInRotatedRow(vector<int>& row, int target) {
    int l = 0, r = row.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (row[mid] == target) return mid;

        // Left half sorted
        if (row[l] <= row[mid]) {
            if (row[l] <= target && target < row[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        // Right half sorted
        else {
            if (row[mid] < target && target <= row[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1; // not found
}
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        bool flag=false;
         for (int i = 0; i < mat.size(); i++) {
        int col = searchInRotatedRow(mat[i], x);
        if (col != -1){flag=true;}
    }
    return flag; 
    }
};
