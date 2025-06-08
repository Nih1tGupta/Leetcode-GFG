class Solution {
public:
    int totalFruit(vector<int>& f) {
    int n = f.size();
    // int maxFruits = 0;
    // // Try starting at every position i
    // for (int i = 0; i < n; ++i) {
    //     unordered_set<int> basket;
    //     int count = 0;
    //     for (int j = i; j < n; ++j) {
    //         basket.insert(f[j]);
    //         if (basket.size() > 2) break; // can't hold more than 2 types
    //         count++;
    //         maxFruits = max(maxFruits, count);
    //     }
        
    // }
    // return maxFruits;
    // o(2n)
    int i=0;int j=0;
    unordered_map<int,int>mp;
    int maxi=0;
    while(j<n){
        mp[f[j]]++;
        if(mp.size()>2){
            while(mp.size()>2){
                mp[f[i]]--;
                if(mp[f[i]]==0){mp.erase(f[i]);}
            i++;
            }
        }
            maxi=max(maxi,j-i+1);
        
        j++;
    }
    return maxi;

    
    }
};