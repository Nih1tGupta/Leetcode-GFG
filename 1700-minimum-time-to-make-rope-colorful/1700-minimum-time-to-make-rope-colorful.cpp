class Solution {
public:
    int minCost(string c, vector<int>& t) {
        int ans=0;int maxi=t[0];
        for(int i=1;i<c.size();i++){
            int a= c[i]; int b= c[i-1];
            if(a==b){
                ans+=min(maxi,t[i]);
                maxi=max(maxi,t[i]);
                // cout<<min(t[i],t[i-1])<<" ";
            }
            else{maxi=t[i];}
        }
        return ans;
    }
};