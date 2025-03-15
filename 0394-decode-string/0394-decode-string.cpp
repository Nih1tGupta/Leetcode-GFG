class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                string tempans="";
                while(!st.empty() and st.top()!="["){
                    tempans=st.top()+tempans;
                    st.pop();
                }
                st.pop();
                string times="";
                while(!st.empty() and isdigit(st.top()[0])){
                    times=st.top()+times;
                    st.pop();
                }
                int no_of_times=stoi(times);
                string back="";
                while(no_of_times--){
                    back=tempans+back;
                }
                st.push(back);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        string anss="";
        while(!st.empty()){
            anss=st.top()+anss;
            st.pop();
        }
        return anss;
    }
};