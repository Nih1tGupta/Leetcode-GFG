class Solution {
public:
    bool ischar(char x){
        if(x>='a' and x<='z')return  1;
        return 0;
    }
    string removeStars(string s) {
        // brute-->expo
        // opt->stack -->bcoz we have to track the prev char
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(ischar(s[i])){st.push(s[i]);}
            else{
                if(!st.empty()){st.pop();}
            }
        }
        string ss="";
        while(!st.empty()){
            ss+=st.top();st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};