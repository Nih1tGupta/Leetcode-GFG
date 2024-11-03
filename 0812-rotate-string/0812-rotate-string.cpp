class Solution {
public:
    bool rotateString(string s, string go) {
        int l=s.length();int gv=go.length();
        if(l!=gv)return 0;
        for(int i=0;i<l;i++){
            rotate(s.begin(),s.begin()+1,s.end());
            if(s==go)return 1;
        }
        return 0;
    }
};