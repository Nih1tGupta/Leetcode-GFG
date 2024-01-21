class Solution {
public:
    int minimumPushes(string word) {
        int a=1;int n=word.length();
        int count=0;
        while(n>0){
            if(n>8){
                count+=a*8;
            }
            else{
                count+=a*n;
            }
            a++;n-=8;
        }
        return count;
        }
};