class Solution {
public:
    int pivotInteger(int n) {
      int i=1;int j=n;
        int lsum=1;int rsum=n;
        while(i<j){
            if(lsum<rsum){i++;lsum+=i;}
            else{j--;rsum+=j;}
        }
        return lsum==rsum?i:-1;
    }
};