class Solution {
public:
     void sum(int ind,vector<vector<int>> &ans,vector<int> &ds,int k,int target,vector<int>&hash){
        if(ds.size() == k && target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i = ind ; i <= 9 ; i++){
            if(target < i) return;
            if(!hash[i]){
            hash[i] = 1;
            ds.push_back(i);
            sum(i+1,ans,ds,k,target-i,hash);
            hash[i] = 0;
            ds.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> hash(10,0);
        // print(hash[0]);
        sum(1,ans,ds,k,n,hash);
        return ans;
    }
};