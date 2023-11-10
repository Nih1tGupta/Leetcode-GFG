class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        int maxi=0,sum=0;
        for(int i=0;i<gain.size();i++){sum+=gain[i];
        if(maxi<sum){maxi=sum;}}
        return maxi;
    }
};