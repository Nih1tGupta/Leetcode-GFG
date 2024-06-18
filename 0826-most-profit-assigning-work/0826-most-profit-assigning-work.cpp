class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<profit.size();i++){
            pq.push({profit[i],difficulty[i]});
        }
        sort(worker.begin(),worker.end(),greater<int>());
        int sum=0;int i=0;
       while(i<worker.size() and !pq.empty()){
            if(worker[i]<pq.top().second){pq.pop();}
            else{sum+=pq.top().first;i++;}
            }
        
        return sum;
    }
};