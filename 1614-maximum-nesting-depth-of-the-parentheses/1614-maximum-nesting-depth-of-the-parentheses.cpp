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
        int maxi=0;int cd =0;
        for(char c:s){
           
            if(c =='('){
                //st.push(c);
                cd++;
            }
            else if(c==')'){
                maxi = max(cd,maxi);
                cd--;
                //st.pop();
            }
        }
        return maxi;
    }
};