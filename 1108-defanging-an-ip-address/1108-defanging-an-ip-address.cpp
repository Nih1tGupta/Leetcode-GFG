class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        int i=0;int n=address.length();
        while(i<n){
            if(address[i]=='.'){
                ans.push_back('[');
                   ans.push_back('.');
                   ans.push_back(']');
            }
            else{ans.push_back(address[i]);}
            i++;        }
        return ans;
    }
};