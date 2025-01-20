class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        // .brute force
        // O(m*n) + s*len(row,col) 
        int m=mat.size(); int n=mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        // mp for row,col
        unordered_map<int,int>r;
        unordered_map<int,int>c;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++){
            int ri=mp[arr[i]].first;
            int ci=mp[arr[i]].second;
            r[ri]++;
            c[ci]++;
            if(r[ri]==n || c[ci]==m){return i;}
        }
        return -1;
    }
};