class Solution {
public:
    bool solve(vector<int>&nums,int mid,int p){
        int i=0; int n=nums.size();
        int cnt=0;
        while(i<n-1){
            if(nums[i+1]-nums[i]<=mid){cnt++;i+=2;}
            else{i+=1;}
        }
        return cnt>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        // brute- recursion
        // think..sorting (so that ajd have min dif f possible- now just find maxi but)
        // blindly starting ke pairs le lengre, toh bhi fail ho  jayega
        // 1 1 2 4 9 10   (1,1) (2,4)->max[2] but (1,1) (9,10)-> max[1]
        // 1 1 2 3 7 10
        int n=nums.size();
        int ans=INT_MAX;
        sort(nums.begin(),nums.end());
        int l=0; int r=nums[n-1]-nums[0];
        while(l<=r){
            int m=(l+r)/2;
            if(solve(nums,m,p)){ans=m;r=m-1;}
            else{l=m+1;}
        }
        return ans;
    }
};