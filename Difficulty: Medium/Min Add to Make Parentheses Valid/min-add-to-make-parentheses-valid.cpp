class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        stack<char>st;
        for(char c:s){
            if(c=='('){st.push(c);}
            else{
                if(!st.empty() and st.top()=='('){st.pop();}
                else{st.push(c);}
            }
            }
            return st.size();
        }
};