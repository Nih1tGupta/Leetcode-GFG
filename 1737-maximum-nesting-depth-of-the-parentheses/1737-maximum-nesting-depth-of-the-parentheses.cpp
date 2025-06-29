class Solution {
public:
    int maxDepth(string s) {
         // int ans=0, p=0;
        // for(char c: s){
        //     p+=(c=='(')-(c==')');
        //     ans=max(ans, p);
        // }
        // return ans;  
        stack<char>st;
        int maxi=0;
        for(char c:s){
           
            if(c =='('){
                st.push(c);
            }
            else if(c==')' and !st.empty()){
                maxi = max((int)st.size(),maxi);
                st.pop();
            }
        }
        return maxi;
    }
};