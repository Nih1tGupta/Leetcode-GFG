class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.empty()) {
        //     return 0;
        // }
        // sort(nums.begin(), nums.end());
        
        // int maxiCount = 1;  // Initialize to 1 as a single element is a consecutive sequence of length 1
        // // 1 2 3 4 100 200
        // for(int i = 0; i < nums.size();i++) {
        //     int count = 1;
        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if(nums[j] == nums[j - 1]) {
        //             continue;  // Skip duplicates
        //         }
        //         if(nums[j] == (nums[j - 1] + 1)) {
        //             count++;
        //             i = j;  // Move to the next consecutive element
        //         } else {
        //             break;
        //         }
        //     }
        //     maxiCount = max(count, maxiCount);
        //      // Move to the next non-consecutive element
        // }
        // return maxiCount;

 // we r distorting h e array here
        int maxi=1;
        int ls=INT_MIN;
        int ct=0;
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if( nums[i]==ls+1){ct++;ls=nums[i]; maxi=max(maxi,ct);}
            else if( nums[i]!=ls){ct=1;ls=nums[i];}
           
        }
        return maxi;
       
        // 123 4 100 200
        // return maxi;
    // int n=nums.size();
    // if(n==0)return 0;
    // int maxi=0;
    // unordered_set<int>st;
    // for(auto it:nums){st.insert(it);}
    // for(auto it:st){
    //     if(st.find(it-1)==st.end()){
        // aage dekhne se aacha->pichla dekhlo ,warna brute force hi ho jayega
    //         int c=1;
    // bhai jiska prev ai- vo starting point ho hi nhi sakta
    //         int first=it;
    //         while(st.find(first+1)!=st.end()){c++;first+=1;}
    //         maxi=max(maxi,c);
    //     }
    // }
    // return maxi;
    //  tc->  set -> o(1)- in avg and bset case- but o(n) in worst case if collison occurs
    // o(3n):o(1)-here we r not distortring
    }
};