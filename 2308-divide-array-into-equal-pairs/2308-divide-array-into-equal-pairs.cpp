class Solution {
public:
    bool divideArray(vector<int>& arr) {
        int n=arr.size();
        // vector<int>vis(n,0);
        // int c=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(vis[i]==0 && vis[j]==0 && arr[i]==arr[j]){c++;vis[i]=1;vis[j]=1;}
        //     }
        // }
        // return (c==n/2);
        // O(N^2): O(N)
        unordered_map<int,int>mp;
        for(auto it:arr){mp[it]++;}
        for(auto it:mp){
            if(it.second%2){return false;}
        }
        return true;
    }
};