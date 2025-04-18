class Solution {
public:
    // bool solve(string &temp,unordered_set<string>&st,int n){
    //     if(temp.size()==n){
    //         if(st.find(temp)==st.end()){return 1;}
    //         return false;
    //     }
    //     for(int i=0;i<=1;i++){
    //         temp.push_back(i+'0');
    //         if(solve(temp,st,n))return true;
    //         temp.pop_back();
        
    //     }
    //     return 0;
    // }
    string findDifferentBinaryString(vector<string>& nums) {   
        // Approach 1: SET + BIT    O(N^2) : O(N)
        // string s;
        // unordered_set<int>st;
        // for(string &num:nums){
        //     st.insert(stoi(num,0,2));
        // }
        // string temp="";
        // int n=nums.size();
        // for(int i=0;i<=pow(2,n)-1;i++){
        //     if(st.find(i)==st.end()){
        //          temp=bitset<16>(i).to_string();
        //         break;
        //     }
        // }
        // return temp.substr(16-n,n);
        // APPROACH 2:BACKTRACK O(2^N):O(N)

        //  unordered_set<string>st;
        // for(auto &num:nums){
        //     st.insert(num);
        // }
        // int n=nums.size();
        // string temp="";
        // solve(temp,st,n);
        // return temp;
        
        // Appoach 3 : XOR BIT CATORS : O(N) : O(1)
        string s="";
        for(int i=0;i<nums.size();i++){
            char ch=nums[i][i];
            s+=(ch=='0')?"1":"0";
        }
        return s;
    }
};