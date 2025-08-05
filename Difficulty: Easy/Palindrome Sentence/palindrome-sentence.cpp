class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int i=0;int j=s.length()-1;
        while(i<j){
            while(i<j && !isalnum(s[j])){j--;}
            while(i<j && !isalnum(s[i])){i++;}
            if(tolower(s[i])!=tolower(s[j])){return 0;}
            i++;j--;
        }
        return 1;
    }
};