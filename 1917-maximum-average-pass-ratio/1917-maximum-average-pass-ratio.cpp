class Solution {
public:
#define P pair<double,int>
    double maxAverageRatio(vector<vector<int>>& c, int x) {
        priority_queue<P,vector<P>>pq;int n=c.size();
        for(int i=0;i<n;i++){
            double cpass= (double)c[i][0]/c[i][1];
            double  newcpass=(double)(c[i][0]+1)/(c[i][1]+1);
            double diff=newcpass-cpass;
            pq.push({diff,i});
        }
        while(x--){
            auto curr=pq.top();pq.pop();
            double delta=curr.first;
            double idx=curr.second;
            c[idx][0]++; c[idx][1]++;
            double cpass= (double)c[idx][0]/c[idx][1];
            double  newcpass=(double)(c[idx][0]+1)/(c[idx][1]+1);
            double diff=newcpass-cpass;
            pq.push({diff,idx});
        }
        double res=0.0;
        for(int i=0;i<n;i++){
            res+=(double)c[i][0]/c[i][1];
        }
        return res/n;
  }
};