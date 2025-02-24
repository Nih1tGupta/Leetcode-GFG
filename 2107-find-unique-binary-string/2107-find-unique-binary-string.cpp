class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {    
        string s;
        unordered_set<int>st;
        for(string &num:nums){
            st.insert(stoi(num,0,2));
        }
        string temp="";
        int n=nums.size();
        for(int i=0;i<=pow(2,n)-1;i++){
            if(st.find(i)==st.end()){
                 temp=bitset<16>(i).to_string();
                break;
            }
        }
        return temp.substr(16-n,n);
    }
};