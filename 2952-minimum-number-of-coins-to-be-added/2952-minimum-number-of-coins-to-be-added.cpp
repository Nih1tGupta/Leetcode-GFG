class Solution {
public:
    int minimumAddedCoins(vector<int>& v, int t) {
        sort(v.begin(),v.end());
              int n=v.size();
        int c=0;int curr=1;
        for(int i=0;i<n and curr<=t ;i++){
            if(curr==v[i]){curr*=2;}
            else if(curr>v[i]){curr+=v[i];}
            else{
                c++;
                curr*=2;
                i--;
            }
        }
        while(curr<=t){c++;curr*=2;}
        return c;
    }
};