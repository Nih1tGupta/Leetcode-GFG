class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& c, int k) {
        vector<vector<int>>v;
        priority_queue< pair<int,pair<int,int>> >pq;
        for(int i=0;i<c.size();i++){
            pq.push( {c[i][0]*c[i][0]+c[i][1]*c[i][1],{c[i][0], c[i][1]} }   );
            if(pq.size()>k){pq.pop();}
        }
        while(!pq.empty()){
            v.push_back({pq.top().second.first,pq.top().second.second});
                pq.pop();
        }
        return v;
    }
};