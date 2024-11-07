class Solution {
public:
    int largestCombination(vector<int>& c) {
        vector<int>b(32,0);
        int maxi=0;
        for(int i=0;i<31;i++){
            for( auto& it:c){if((it&(1<<i))!=0){b[i]++;}}
        }
        return *max_element(b.begin(),b.end());
    }
};