class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string s=countAndSay(n-1);
        cout<<s<<" ";
        string res="";
        for(int i=0;i<s.length();i++){
            int count=1;
            char ch=s[i];
            while(i<=s.length()-1 and s[i]==s[i+1]){
                count++;i++;
            }
            // char to string--> string(1,ch)->remember
            res+=to_string(count)+string(1,ch);
        }
        
        return res;

        // recursion->
    }
};