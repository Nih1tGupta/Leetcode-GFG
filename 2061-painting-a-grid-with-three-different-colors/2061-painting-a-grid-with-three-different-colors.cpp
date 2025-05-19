class Solution {
public:
    // const int MOD =1e9+7;
    // void possible_States(string s,char prev, int len,int row_len,vector<string>&v){
    //     if(len==row_len){v.push_back(s);return;}
    //     for(char curr: {'R','G','B'}){
    //         if(curr==prev)continue;
    //         possible_States(s+curr,curr,len+1,row_len,v);
    //     }
    // }
    // int solve(int prev_idx,int rem_col,vector<string>states,int row_len,vector<vector<int>>&dp){
    //     if(rem_col==0){return 1;}// 1 way to mil gya hai
    //     if(dp[prev_idx][rem_col]!=-1){return dp[prev_idx][rem_col];}
    //     string prev_state= states[prev_idx];
    //     int ways =0;
    //     // finding next state
    //     for(int i=0;i<states.size();i++){
    //         if(i==prev_idx){continue;}
    //         string curr_state=states[i];
    //         bool flag=true;
    //         // comparing prev and curr
    //         for(int j=0;j<row_len;j++){
    //             if(curr_state[j]==prev_state[j]){flag=false;break;}
    //         }
    //         if(flag){
    //             ways = (ways+ solve(i,rem_col-1,states,row_len,dp))%MOD;
    //         }
    //     }
    //     return dp[prev_idx][rem_col]=ways;
    // }
    // int colorTheGrid(int m, int n) {
    //     // step 1-generate all possibe states.
       
    //      vector<string>states; 
    //      possible_States("",'$',0,m,states);
    //     //   ab solve fuction likhenge
    //     int sz=states.size();
    //      vector<vector<int>>dp(sz+1,vector<int>(n+1,-1));
    //     int res=0;
    //      for(int i=0;i<states.size();i++){
    //             res=(res+solve(i,n-1,states,m,dp))%MOD;
    //      }
    //      return res;
    // }
    const int mod = 1e9 + 7;
    int dp[1005][250], rowValid[250][250];
    vector<int> good, pattern [250];
    int colorTheGrid(int m, int n) {
        int total = pow(3, m);

        for (int i = 0; i < total; i++) {
            int val = i, valid = 1;
            for (int j = 0; j < m; j++) 
                pattern[i].push_back(val % 3), val /= 3;
            for (int j = 1; j < m; j++) 
                if (pattern[i][j] == pattern[i][j - 1]) valid = 0;
            if (valid) good.push_back(i);
        }
        for (int i : good) dp[1][i] = 1;

        for (int i : good) {
            for (int j : good) {
                rowValid[i][j] = 1;
                for (int k = 0; k < m; k++) 
                    if (pattern[i][k] == pattern[j][k]) 
                        rowValid[i][j] = 0;
            }
        }

        for (int col = 2; col <= n; col++)
            for (int i : good)
                for (int j : good)
                    if (rowValid[i][j]) 
                        dp[col][i] = (dp[col][i] + dp[col - 1][j]) % mod;
                        
        return accumulate(dp[n], dp[n] + total, 0L) % mod;
    }
};