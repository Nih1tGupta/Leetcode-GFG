class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int l=0;
        int r=0;
        while(i<s.length()){
            while(i<s.length() and s[i]!=' '){s[r]=s[i];r++;i++;}
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';r++;l=r;
            }
            i++;
        }
        s=s.substr(0,r-1);
        return s;
    } 
    // blue_is_sky_the
    //  l    r
};
// i
