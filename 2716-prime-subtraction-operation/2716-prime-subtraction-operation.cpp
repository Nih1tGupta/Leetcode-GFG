class Solution {
public: 
int n;
int sieve(int num,int prev){
    vector<int>v;
    for(int i=2;i<num;i++){
        int curr=i;int c=0;
        for(int j=2;j*j<=i;j++){
            if(curr%j==0)c++;
        }
        if(c==0)v.push_back(curr);
    }

int mini=num;
for(int i=0;i<v.size();i++){
    if(num-v[i]>prev){mini=min(mini,num-v[i]);}
}
return mini;
}
    bool primeSubOperation(vector<int>& nums) {
        n=nums.size();
        nums[0]=sieve(nums[0],0);
        for(int i=1;i<n-1;i++){
            nums[i]=sieve(nums[i],nums[i-1]);
        }
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1])return 0;
        }
        return 1;
    }
};