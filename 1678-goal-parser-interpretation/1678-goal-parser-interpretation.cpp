class Solution {
public:
    string interpret(string command) {
        string str="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){str.push_back('G');}
            else if(command[i]=='('){
                if(command[i+1]==')'){str.push_back('o');}
                else{
                    str.push_back('a');str.push_back('l');
                }
            }
        }
        return str;
    }
};