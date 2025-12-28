class Solution {
public:
    int minAllOneMultiple(int k) {
//      Remember that if a number is divisible by 2 or 5 then it's unit digit will never be 1.
// So, if k % 2 == 0 or k % 5 == 0, then the result is always -1.
// A number with only digit 1's, 1st divisibility by k is obtained 
//when the number of 1's is <= k. 
    if(k%2==0 || k%5==0)return -1;
    int num=0;
    for(int i=1;i<=k;i++){
        num= (num*10 + 1)%k;
        if(num==0)return i;
    }
    return -1;
    }
};