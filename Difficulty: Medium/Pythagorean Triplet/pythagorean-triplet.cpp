class Solution {
  public:
    int sq(int x){
        return x*x;
    }
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        // BRUTE->N3
        // BETTER->
       int n=arr.size();
       map<int,int>mp;
       for(auto it:arr){mp[it*it]++;}
       for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
               if( mp[sq(arr[i])+sq(arr[j])] )return true;
           }
       }
    return false;
    }
};
// 9 4 16 36 25