class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        // code here
        int N=arr.size();
        vector<int>v;
        vector<int>suff(N,-1);
        suff[N-1]=arr[N-1]; 
        for(int i=N-2;i>=0;i--){
            if(suff[i+1]>arr[i]){suff[i]=arr[i];}
            else{suff[i]=suff[i+1];}
        }
        for(int i=0;i<N;i++){
            int ans=-1;
            int l=i+1;int h=N-1;
            while(l<=h){
            int m=(l+h)/2;
            if(suff[m]<arr[i]){ans=m;l=m+1;}
            else{h=m-1;}
            }
             v.push_back(ans);
        }
       
        return v;
    }
};