class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            int m=words[i].size();
            int j=0,k=m-1;
            int isPalindrome=true;
            while(j<k){
                if(words[i][j]!=words[i][k]){
                    isPalindrome=false;
                    break;
                }
                j++;
                k--;
            }
            if(isPalindrome==true){
                return words[i];
            } 
        }
        return "";
    }
};