class Solution {
public:
    bool canBeValid(string s, string l) {
        stack<int>o; stack<int>oc;int n=s.length();
        if(n%2!=0)return 0;
        for(int i=0;i<n;i++){
            if(l[i]=='0'){oc.push(i);}
            else if(s[i]=='('){o.push(i);}
            else if (s[i]==')'){
                if(!o.empty()){o.pop();}
                else{
                    if(!oc.empty()){oc.pop();}
                    else{return false;}
                }
                
            }
        }
        while(!o.empty() and !oc.empty() and o.top()<oc.top()){
            o.pop();oc.pop();
        }
        if(o.empty())return true;
    return false;
    }
};