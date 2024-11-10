class Solution {
public:
void f(int n,vector<int>&v,int d){
    for(int i=0;i<32;i++){
        if( (n>>i) &1){v[i]+=d;}
    }
}
int getdec(vector<int>&v){
    int n=0;
    for(int i=0;i<32;i++){
        if(v[i]>0){n|=(1<<i);}
    }
    return n;
}
    int minimumSubarrayLength(vector<int>& nums, int k) {
         int n = nums.size();

        int result = INT_MAX;

        int i = 0;
        int j = 0;

        vector<int> vec(32, 0);
        //vec[i] = total number of set bits in ith position

        //T.C : O(2*n)
        while(j < n) { //O(n)
            f(nums[j], vec, 1); //adding in the current window

            while(i <= j && getdec(vec) >= k) {
                result = min(result, j-i+1);
                f(nums[i], vec, -1); //remove the nums[i] from the window
                i++;
            }

            j++;
        }

        return result == INT_MAX ? -1 : result;
    }
};