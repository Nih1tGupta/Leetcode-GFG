class Solution {
public:
    int numWaterBottles(int a, int b) {
         int drinked = 0;
        int eb = 0; // empty bottles
        
        while (a > 0) {
            drinked += a;   // drink all current bottles
            eb += a;        // get empty bottles
            
            a = eb / b; // exchange empties for new bottles
            eb = eb % b;         // leftover empties
        }
        return drinked;

    }
};