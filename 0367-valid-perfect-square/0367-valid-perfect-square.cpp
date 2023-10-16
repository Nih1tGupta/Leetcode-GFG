class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long i=0;;i++){long long val=i*i;
            if(val==num){return true;}
            if(val>num){return false;}
        }
    }
    // return  ;
};