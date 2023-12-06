class Solution {
public:
    int totalMoney(int n) {
         int j=0;
        int count=0;
        for(int i=0; i<n; i++){
           if(i%7==0) j++;
           count+= j + (i%7);
        }
        return count;
    }
};