class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:arr){pq.push(it);}
        int sum=0;
        while(!pq.empty() and pq.size()>=2){
            int a= pq.top(); pq.pop();
            int b= pq.top(); pq.pop();
            int cost= a+b;
            sum+=cost;
            pq.push(cost);
        }
        return sum;
    }
};