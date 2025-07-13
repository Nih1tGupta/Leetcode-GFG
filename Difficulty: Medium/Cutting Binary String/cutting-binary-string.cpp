class Solution {
  public:
    bool checked(string s){
         long long num = 0;
         if(s[0]=='0')return 0;
    for (char c : s) {
        num = num * 2 + (c - '0');
    }

    // Step 2: Check if num is a power of 5
    if (num == 0) return false;

    while (num % 5 == 0) {
        num /= 5;
    }

    return num == 1;
    }
    int solve(string s,int i){
        if(i>=s.length()){return 0;}
        
        int mini=INT_MAX;
        string temp="";
        for(int j=i;j<s.length();j++){
             temp+=s[j];
            if(checked(temp)){
                int cost=solve(s,j+1);
                if(cost!=INT_MAX){mini=min(mini,cost+1);}
            }
        }
        return mini;
    }
    int cuts(string s) {
        // code here
        int ans= solve(s,0);
        return ans==INT_MAX?-1:ans;
    }
};