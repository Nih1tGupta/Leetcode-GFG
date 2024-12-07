class Solution {
public:
bool solve(vector<int>& nums,int mid, int k){
    int total=0;
    for(auto it:nums){
        int op=it/mid;
        if(it%mid==0){op-=1;}
        total+=op;
    }
    return total<=k;
}
    int minimumSize(vector<int>& nums, int k) {
    //     priority_queue<int,vector<int>>pq;
    // for(auto it:nums){pq.push(it);}
    // while(k--){
    //     int topp=pq.top(); pq.pop();  int a=(topp-1)/2;int b=(topp+1)/2;
    //     pq.push(a);pq.push(b);
    // }
    // return pq.top();
    int l=1;int h=*max_element(nums.begin(),nums.end());int ans=h;
    while(l<=h){
        int m=l-(l-h)/2;
        if( solve(nums,m,k)==true){ans=m;h=m-1;}
        else{l=m+1;}
    }
    return ans;
    }
};