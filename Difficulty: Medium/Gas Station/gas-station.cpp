class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
         int n=gas.size();
        int gs=accumulate(gas.begin(),gas.end(),0);
        int cs=accumulate(cost.begin(),cost.end(),0);
        if(cs>gs)return -1;
        int total=0;int idx=0;
        for(int i=0;i<n;i++){
            total+=(gas[i]-cost[i]);
            if(total<0){
                total=0;idx=i+1;
            }
        }
        return idx;
    }
};