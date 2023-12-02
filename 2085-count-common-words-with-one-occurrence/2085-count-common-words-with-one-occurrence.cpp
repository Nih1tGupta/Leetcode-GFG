class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
         unordered_map<string,int>mp;
         unordered_map<string,int>mp1;
        int count=0;
         for(auto i:words1){mp[i]++;}
        for(auto i:words2){mp1[i]++;}
		for(auto it:words2){
		if(mp[it]==1 && mp1[it]==1){
		count++;}
		}
		return count;
    }
};