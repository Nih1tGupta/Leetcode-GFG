class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int maxi=0;int n=arr.size();
       unordered_map<long long,bool>mp;
       for(auto it:arr){mp[it]=1;}
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long f=arr[i];  long long s=arr[j];
                int curr=2;
                while(mp.find(f+s)!=mp.end()){
                    curr++;
                    long long t=f+s;
                    f=s;s=t;
                }
                if(curr>2){maxi=max(maxi,curr);}
            }
        }
        return maxi;
    }
};