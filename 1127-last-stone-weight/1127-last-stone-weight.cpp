class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
         priority_queue<int,vector<int>>pq;
        for(auto it:s){
            pq.push(it);
        }
        while(pq.size()!=1){
            int x=pq.top();pq.pop();
            int y=pq.top();pq.pop();
            int w=abs(x-y);
            pq.push(w);
        }
        return pq.top();
    }
};