class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
            sort(a.rbegin(),a.rend());
      sort(b.rbegin(),b.rend());
      vector<int>ans(k,0);
      int n=a.size();
      int m=b.size();
      priority_queue<int,vector<int>,greater<int>>pq;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              int curr=a[i]+b[j];
              if(pq.size()<k){
                  pq.push(curr);
                //   continue;
              }
              else if(pq.size()==k){
                  if(pq.top()>=curr){
                      break;
                  }
                  else{
                      pq.pop();
                      pq.push(curr);
                  }
              }
          }
      }
      int ind=k-1;
      while(!pq.empty()){
          ans[ind--]=pq.top();
          pq.pop();
      }
      return ans;
    }
};