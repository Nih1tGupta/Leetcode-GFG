class Solution {
public:
     vector<vector<int>>ans;
    void print_combo(int ind,vector<int>&v,vector<int>&ds,int target){
        if(target==0){
            ans.push_back(ds);
        }
        for(int i=ind;i<v.size();i++){
            if(i>ind && v[i]==v[i-1]) continue;
            if(v[i]>target) break;
            ds.push_back(v[i]);
            print_combo(i+1,v,ds,target-v[i]);
            ds.pop_back();
        }
//         Why no extra recursive call after ds.pop_back()?
// Because the for loop automatically explores the "not-take" path in the next iteration.
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(begin(candidates),end(candidates));
        vector<int>ds;
        print_combo(0,candidates,ds,target);    
        
        return ans;
//         Think of Combination Sum I as "choose or skip" for each element manually.

// Think of Combination Sum II as "iterate over choices with skip duplicates", and within each loop you only explore the take, and the loop handles the rest.
    }
};