class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct=0;int dt=0;
        int e=INT_MIN;int f=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(ct==0 and nums[i]!=f){
                ct=1; e=nums[i];
            }
            else if(dt==0 and nums[i]!=e){
                dt=1;f=nums[i];
            }
            else if(nums[i]==e){ct++;}
            else if(nums[i]==f){dt++;}
            else{
                ct--;dt--;
            }
        }
        vector<int>v;
        int a=0;int b=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e){a++;}
             if(nums[i]==f){b++;}
        }
            if(a>=(int(n/3))+1){v.push_back(e);}
            if(b>=(int(n/3))+1){v.push_back(f);}
        
        sort(v.begin(),v.end());
        return v;
    }
};