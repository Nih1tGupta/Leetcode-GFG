class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>c(n+1,0);
        for(int i=0;i<trust.size();i++){
            c[trust[i][0]]--; c[trust[i][1]]++;
        }
        for(int i=1;i<c.size();i++){
            if(c[i]==n-1){return i;}
        }
        return -1;
    } 
};