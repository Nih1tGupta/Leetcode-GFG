class Solution {
public:
    // bool match(string &p,string &s){
    //     for(int i=0;i<p.length();i++){
    //         if( (p[i]=='I' and s[i]>s[i+1]) || (p[i]=='D' and s[i]<s[i+1]) ){return 0;}
    //     }
    //     return 1;
    // }

    // bool solve(int i,string &p,string &num,vector<bool>&vis){
    //     if(num.size()==p.size()+1)return 1;
    //     for(int j=1;j<=9;j++){
    //         if(vis[j])continue;
    //         if( (p[i]=='I' and num.back()-'0'<j) || (p[i]=='D' and num.back()-'0'>j )){
    //             num+=to_string(j);
    //             vis[j]=true;
    //             if(solve(i+1,p,num,vis))return 1;
    //             vis[j]=false;
    //             num.pop_back();
    //         }
    //     }
    //     return false;
    // }
    string smallestNumber(string pattern) {
        // string ss="";
        // int n=pattern.length();
        // for(int i=1;i<=n+1;i++){
        //     ss.push_back(i+'0');
        // }
        // while(!match(pattern,ss)){
        //     next_permutation(begin(ss),end(ss));
        // }return ss;
        // O(len)*(n+1)!


// recursion 
    // vector<bool>vis(10,0);
    // for(int i=1;i<=9;i++){
    //     string s=to_string(i);
    //     vis[i]=1;
    //     if(solve(0,pattern,s,vis))return s;
    //     vis[i]=false;
    // }
    // return "";
    // stack based approch
      string num="";
      stack<char>st;
       int c=1;
    int n=pattern.length();
      for(int i=0;i<=pattern.length();i++){
            st.push(c+'0');c++;
            if(i==n || pattern[i]=='I'){
                while(!st.empty()){
                    num+=st.top();st.pop();
                }
            }
      }
      return num;
    }
};