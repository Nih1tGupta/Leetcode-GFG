class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long  n=nums.size();
        priority_queue<long long ,vector<long long >,greater<long long >>pq;
        for(auto it:nums){pq.push(it);}
        long long  op=0;
        while(pq.top()<k){
            long long  a=pq.top();pq.pop();
            long long  b=pq.top();pq.pop();
            long long  c=min(a,b)*2+max(a,b);
            pq.push(c);
            op++;
        }
        return op;
    }
};