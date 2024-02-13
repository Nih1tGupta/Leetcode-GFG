class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int f=n-1;
        for(int i= n-2;i>=0;i--){
            if( i +nums[i]>=f){f=i;}
        }
        if(f==0){return true;}
        return false;
    }
};