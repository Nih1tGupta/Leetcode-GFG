class Solution {
public:
    int climbStairs(int n) {
        if(n==1){return 1;}
        if(n==2){return 2;}
      int two=1;int one=2;
      int current;
      for(int i=3;i<=n;i++){current=two+one;two=one;one=current;}
      return current;
          }
};