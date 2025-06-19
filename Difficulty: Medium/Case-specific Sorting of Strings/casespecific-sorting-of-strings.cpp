class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<char>ub;
        vector<char>lb;
        for(char ch:s){
            if(isupper(ch)){ub.push_back(ch);}
            else{lb.push_back(ch);}
        }
        sort(ub.begin(),ub.end());
        sort(lb.begin(),lb.end());
        int udx=0; int ldx=0;
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){s[i]=ub[udx++];}
            else{s[i]=lb[ldx++];}
        }
        return s;
    }
};