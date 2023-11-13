class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v(candies.size(),false);
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){maxi= max(maxi,candies[i]);}
        for(int i=0;i<candies.size();i++){if(candies[i]+extraCandies>=maxi){v[i]=true;}}
        return v;
    }
};