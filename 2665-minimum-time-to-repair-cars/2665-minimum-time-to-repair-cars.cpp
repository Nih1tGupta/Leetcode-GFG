class Solution {
public:
    bool solve(long long  t,vector<int>r,int c){
        long long  ct=0;
        for(int i=0;i<r.size();i++){
            ct+=sqrt(t/r[i]);
        }
        return (ct>=c);
    }
    long long repairCars(vector<int>& ranks, int cars) {
        int n=ranks.size();
        long long  l=1;
        int maxi=*max_element(ranks.begin(),ranks.end());
        long long h= 1LL*maxi*cars*cars;
        h*= 1LL *maxi;
        long long  res=0;
        while(l<=h){
            long long  m=(l+h)/2;
            if(solve(m,ranks,cars)){
                res=m;
                h=m-1;
            }   
            else{
                l=m+1;
            }     
        }
        return res;
    }
};