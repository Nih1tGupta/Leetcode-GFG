class Solution {
public:
    string clearDigits(string s) {
        int sz=s.length();
    //     for(int i=sz-1;i>=0;i--){
    //         if(s[i]>='0' and s[i]<='9'){
    //             s[i]='*';
    //             int j=i-1;
    //             while(j>=0){
    //                 if(s[j]>='a' and s[j]<='z'){s[j]='*';break;}
    //                 j--;
    //             }
    //             }
    //     }
    //     string  ss;
    //     for(int i=0;i<sz;i++){
    //         if(s[i]=='*')continue;
    //         ss+=s[i];
    //     }
    //     return ss;
    stack<char>st;
    for(int i=0;i<sz;i++){
     if(isalpha(s[i]))st.push(s[i]);
     else{st.pop();}   
    }
    string ss;
    while(!st.empty()){ss+=st.top();st.pop();}
    reverse(ss.begin(),ss.end());
    return ss;
    }
};