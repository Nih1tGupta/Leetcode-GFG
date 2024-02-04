class Solution {
public: 
    int t[501][501];
    int solve(vector<int>& nums1, vector<int>& nums2,int i,int j){
         int m=nums1.size();
        int n=nums2.size();
        if(i==m || j==n){return -1e9;}
        
        if(t[i][j]!=-1e9){
            return t[i][j];
        }
        int a=nums1[i]*nums2[j];
        int b = nums1[i]*nums2[j]+ solve(nums1,nums2,i+1,j+1);
        int c = solve(nums1,nums2,i,j+1); 
        int d = solve(nums1,nums2,i+1,j);
        return t[i][j]= max({a,b,c,d});
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
         int m=nums1.size();
       int n=nums2.size();
        for(int i=0;i<501;i++){
            for(int j=0;j<501;j++){
                t[i][j]=-1e9;
            }
        }
       return  solve(nums1,nums2,0,0);
    }
};