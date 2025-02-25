class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       int n=arr.size();
       int M=1e9+7;
       vector<int>p(n,0);
       p[0]=arr[0];
       for(int i=1;i<n;i++){
        p[i]=p[i-1]+arr[i];
       }
       int c=0;int o=0;int e=1;
       for(int i=0;i<n;i++){
        if(p[i]%2==0){
            c=(c+o)%M;
            e++;
        }
        else{
            c=(c+e)%M;
            o++;
        }
       }
       return c;
    }
};