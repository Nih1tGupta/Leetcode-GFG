class Solution {
public:
    int solve(int num){
        int s=0;
        while(num>0){
            s+=(num%10);
            num/=10;
        }
        return s;
    }
    int solve2(vector<int>& a, vector<int>& b) {
    // Store index of elements in 'a'
    unordered_map<int, int> pos;
    int n = a.size();
    // Populate the hashmap with indices of 
    // elements in 'a'
    for(int i = 0; i < n; i++) {
        pos[a[i]] = i;
    }
    int swaps = 0;
    // Traverse array 'b' to match it with 'a'
    for(int i = 0; i < n; i++) {
        // If element is not in the correct 
        // position, swap it
        if(a[i] != b[i]) {
            swap(b[i], b[pos[b[i]]]);
            swaps++;
            // Re-evaluate current index to 
            // check correctness
            i--;
        }
    }
    return swaps;
}
    int minSwaps(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++){
            int d_sum=solve(nums[i]);
            pq.push({d_sum,nums[i]});
        }
        vector<int>v;
        while(!pq.empty()){
            pair<int,int>p=pq.top(); pq.pop();
            int numm=p.second;
            v.push_back(numm);
        }
        return solve2(nums,v);
    }
};