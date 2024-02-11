class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int a=1;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){s.insert(nums[i]);}
        for(int j=0;j<s.size();j++){
            if(s.find(a)==s.end()){return a;}
            a++;
        }
        return a;
    }
};