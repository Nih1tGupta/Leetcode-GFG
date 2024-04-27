class Solution {
public:
    string decodeString(string s) {
        stack<int>numst;
        stack<string>strst;
        int currno=0;string  currst="";
        for(auto c:s){
            if(c=='['){
                numst.push(currno);
                strst.push(currst);
                currno=0;currst="";
            }
            
            else if(c==']'){
                int num=numst.top();numst.pop();
                string output="";
                while(num--){output+=currst;}
                string prev=strst.top();strst.pop();
                currst=prev+output;
            }
            
            else if(isdigit(c)){currno=currno*10+c-'0';}
            else{currst+=c;}  
        }
        return currst;
    }
};