class Solution {
public:
    void solve(vector<int>&digits,vector<int>&vis,map<int,int>&mp,int temp){
        if(temp>=100){
            if(temp%2==0){
            mp[temp]++;
            }
            return;
           
        }
        for(int i=0;i<digits.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                solve(digits,vis,mp,digits[i]+(temp*10));
                vis[i]=0;
            }
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        int ct=0;
        for(auto it:digits){
            if((it&1)==0){ct++;}
        }
        if(ct==0)return {};
        vector<int>vis(digits.size(),0);
        map<int,int>mp;
        for(int i=0;i<digits.size();i++){
            vis[i]=1;
            if(digits[i]!=0)solve(digits,vis,mp,digits[i]);
            vis[i]=0;
        }
        vector<int>ans;
        for(auto it:mp){ans.push_back(it.first);}
        return ans;
    }
};