class Solution {
public:
    // bool zero(vector<int>&nums){
    //     for(int i=0;i<nums.size();i++){
    //     if(nums[i]>0)return 0;
    //     }
    //     return 1;
    // }
    bool diffarray(vector<int>&nums,vector<vector<int>>&que,int k){
        int n=nums.size();
        int q=que.size();
        vector<int>diff(n,0);
        for(int i=0;i<=k;i++){
            // kth query tak process karna hai
            int l=que[i][0]; int r=que[i][1]; int x= que[i][2];
            diff[l]+=x;
            if(r+1<n)diff[r+1]-=x;
        }
        int cs=0;
        for(int i=0;i<n;i++){
            cs+=diff[i];
            diff[i]=cs;
            if(nums[i]-diff[i]>0)return 0;
        }
        return 1;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        // int k=0;
        // if(zero(nums))return 0;
        // for(int i=0;i<q.size();i++){
        //     int l=q[i][0]; int r=q[i][1]; int x=q[i][2];
        //     for(int j=l;j<=r;j++){
        //         nums[j]=max(0,nums[j]-x);
        //     }
        //     k++;
        //     if(zero(nums))return k;
        // }
        // return -1;
        int n=nums.size();
        int q=queries.size();
        auto lambda=[](int x){return x==0;};
        if(all_of(begin(nums),end(nums),lambda)){return 0;}
        // for(int i=0;i<q;i++){
        //     if(diffarray(nums,queries,i)==true){return i+1;}
        // } 
        int l=0;int r=q-1;
        int res=0;
        while(l<=r){
            int m=(l+r)/2;
            if(diffarray(nums,queries,m)==true){res=m+1;r=m-1;}
            else{l=m+1;}
        }
        return (res==0)?-1:res;
    }
};