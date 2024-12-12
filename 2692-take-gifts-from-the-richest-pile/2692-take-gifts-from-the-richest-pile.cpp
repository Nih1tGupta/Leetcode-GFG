class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int,vector<int>>pq;
        for(auto it:gifts){pq.push(it);}
        while(k--){
            int front=pq.top();pq.pop();
            int sq=floor( sqrt(front));
            pq.push(sq);
        }
         long long c = 0;
        while (!pq.empty()) {
            c += pq.top();
            pq.pop();
        }
        return c;
    }
};