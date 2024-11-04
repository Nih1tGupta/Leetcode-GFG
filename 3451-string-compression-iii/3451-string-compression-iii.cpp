class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        int i=0;string s="";
        while(i<n){
            char ch=word[i];int c=0;
            while(i<n and c<9 and ch==word[i]){i++;c++;}
            s +=to_string(c)+ch;
        }
        return s;
    }
};