class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         vector<int>v;
        int N=digits.size();
       int carry=1;
       for(int i=N-1;i>=0;i--){
           v.push_back((digits[i]+carry)%10);
           carry=(digits[i]+carry)/10;
       }
       if(carry){
           v.push_back(carry);
       }
       reverse(v.begin(),v.end());
       return v;
    }
};