class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
    //     long long  ts=0;long long  cs=0;long c=0;
    //     for(auto it:nums){ts+=it;}
    //     for(int i=0;i<nums.size()-1;i++){
    //          cs+=nums[i];ts-=nums[i];
    //         if(cs>=ts  ){c++;}
    //     }
    //     return c;
    // }



int n=nums.size();
vector<long long>p(n,0);
p[0]=nums[0];
vector<long long>s(n,0);
s[n-1]=nums[n-1];
for(int i=1;i<n;i++){
    p[i]=p[i-1]+nums[i];
}
for(int i=n-2;i>=0;i--){
    s[i]=s[i+1]+nums[i];
}
long long c=0;
for(int i=0;i<n-1;i++){
    if(p[i]>=s[i+1]){c++;}
}
return c;










}

};