class Solution {
public:
    int divide(int dividend, int divisor) {
        if( divisor==-1 && dividend==INT_MIN){return INT_MAX;}
        return floor(dividend/divisor);
   
    }
};