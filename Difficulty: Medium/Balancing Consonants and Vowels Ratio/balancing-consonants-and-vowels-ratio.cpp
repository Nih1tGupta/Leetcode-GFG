class Solution {
  public:
    bool isvowel(char &ch){
        if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u')return 1;
        return 0;
    }
    int countBalanced(vector<string>& arr) {
        // code here
        unordered_map<int,int>mp;
        mp[0]=1;int ans=0;int cnt=0;
        for(int i=0;i<arr.size();i++){
            for(char ch:arr[i]){
                if(isvowel(ch)){cnt++;}
                else{cnt--;}
            }
                ans+=mp[cnt];
                mp[cnt]++;
            
        }
        return ans;
    }
};