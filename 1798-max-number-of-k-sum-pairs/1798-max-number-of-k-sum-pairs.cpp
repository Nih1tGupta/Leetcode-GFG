class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // brute
        //  int count = 0;
        // for(int i=0;i<nums.size()-1;i++)     // n operation
        // {
        //      if(nums[i] == 0)
        //      {
        //          continue ;
        //      }
        //      for(int j=i+1;j<nums.size();j++)   // n operation
        //      {        
        //            if(nums[j] == 0)
        //            {
        //                continue ;
        //            }
        //            int sum = nums[i] + nums[j];
        //            if(sum == k)
        //            {    
        //                nums[i] = 0;
        //                nums[j] = 0;
        //                count++ ;
        //                break ;
        //            }   
        //      }     
        // }


        // 2 pointer
        // sort(nums.begin(),nums.end());
        // int i=0;int j=nums.size()-1;int c=0;
        // while(i<j){
        //     int s=nums[i]+nums[j];
        //     if(s==k){c++;i++;j--;}
        //     else if(s>k){j--;}
        //     else{i++;}
        // }
        // return c;

        map<int,int> mapp;
int count = 0;

    for(int i = 0; i <nums.size() ;i++){
        
        int x=k-nums[i];
        if(mapp[x]<1){
            mapp[nums[i]]++;
        }
        else{
            count++;
            mapp[x]--;
        }
    }
    return count;

    }
};