class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        // vector<int>a,b,c;
        // for(auto it:nums){
        //     if(it<p){a.push_back(it);}
        //     else if(it>p){b.push_back(it);}
        //     else{c.push_back(it);}
        // }
        // a.insert(a.end(),c.begin(),c.end());
        // a.insert(a.end(),b.begin(),b.end());
        // return a;
        // O(n+c+b):O(2n +[n-for answer])   || O(n+c+b):O(n+[for answer])
        // O(3n):O(n[for ans]);
        // optimal-->
        int less=0;int eq=0;
        for(auto it:nums){
            if(it<p){less++;}
            else if(it==p){eq++;}
        }
        vector<int>v(nums.size());
        int lessI=0;int equalI=less;
        int gI=less+eq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<p){v[lessI]=nums[i];lessI++;}
            else if(nums[i]>p){
                v[gI]=nums[i];gI++;
            }
            else{
                v[equalI]=nums[i];
                equalI++;
            }
        }
        return v;
    }
};