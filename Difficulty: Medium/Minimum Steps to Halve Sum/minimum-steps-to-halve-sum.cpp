class Solution {
  public:
    int minOperations(vector<int>& arr) {
        // code here
        double s=0;
        for(auto it:arr){s+=it;}
        double req= (double)s/2.0;
        priority_queue<double>pq; int op=0;
        for(auto it:arr){pq.push(it);}
        while(s>req){
            double num= pq.top();pq.pop();
            num=num/2.0;
            pq.push(num);
            s-=num; op++;
        }
      return op;  
    }
};