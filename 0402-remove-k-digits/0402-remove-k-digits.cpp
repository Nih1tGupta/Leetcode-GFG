class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string s;
        for(int i=0;i<num.size();i++){
            while(!st.empty() and k>0 and  st.top()-'0' >num[i]-'0'){st.pop();k--;}
            st.push(num[i]);
        }
        // O(n*2) +o(k)
        while(k>0){st.pop();k--;}
        if(st.empty())return "0";
        while(!st.empty()){s+=st.top();st.pop();}
        while(s.size()>0 and s.back()=='0'){s.pop_back();}
        // o(n)
        if(s.empty())return "0";
        reverse(s.begin(),s.end());
        return s;
    }
};