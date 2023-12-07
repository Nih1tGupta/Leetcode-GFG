class Solution {
public:
    int pivotInteger(int n) {
         int tot = 0;
        for(int i=1;i<=n;i++){
            tot = tot+i;
        }
        int left = 0;
        int right = tot;
        for(int i=1;i<=n;i++){
            right = right-i;
            if(left != right){
                left = left+i;
            }
            else{
                return i;
            }
        }
        return -1;
    }
};