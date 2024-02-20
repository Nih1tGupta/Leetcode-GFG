class Solution {
public:
    string removeDuplicates(string s) {
          stack<char>st;string ans="";
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!st.empty()){            
                char top= st.top();
            if((s[i]==top)){st.pop();}
            
            else{st.push(s[i]);}
            }
            else{
                st.push(s[i]);
            }
               // A  B  B A C A 
            
        }
        while(!st.empty()){ans=st.top()+ans;st.pop();}
        return ans;
    }
};