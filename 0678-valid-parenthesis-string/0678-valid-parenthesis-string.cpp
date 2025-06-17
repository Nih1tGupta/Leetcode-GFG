class Solution {
public:
    // bool solve(int i,int op,string s,vector<vector<int>>&dp){
    //     // base
    //     if(i==s.length()){return (op==0);}
    //     if(dp[i][op]!=-1)return dp[i][op];
    //     bool flag=false;
    //     if(s[i]=='('){
    //         flag|= solve(i+1,op+1,s,dp);
    //     }
    //     else if(s[i]==')'){
    //         if(op>0)flag|= solve(i+1,op-1,s,dp);
    //     }
    //     else{
    //         flag |=solve(i+1,op+1,s,dp);
    //         if(op) {flag|=solve(i+1,op-1,s,dp);}
    //         flag |=solve(i+1,op,s,dp);
    //     }
    //     return dp[i][op]=flag;
    // }
    bool checkValidString(string s) {
        int n=s.length();
        // vector<vector<int>>dp(n,vector<int>(n,-1));
        // return solve(0,0,s,dp);
        stack<int>op;
        stack<int>ast;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){op.push(i);}
            else if(s[i]=='*'){
                ast.push(i);
            }
            else{
                if(!op.empty()){op.pop();}
                else if(!ast.empty()){ast.pop();}
                else{return false;}
            }
        }
        while(!op.empty() and !ast.empty()){
            if(op.top()>ast.top()){return false;}
            op.pop();
            ast.pop();
        }
        return (op.empty());
    }
};