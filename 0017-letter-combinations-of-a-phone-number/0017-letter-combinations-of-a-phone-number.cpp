class Solution {
    private:
        void combination(string digit,string output,int index,vector<string>&ans,string map[]){
            if(index>=digit.length()){ans.push_back(output);
            return ;}
        int num=digit[index]-'0';
        string value = map[num];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
              combination(digit,output,index+1,ans,map);
              output.pop_back();
                    }
        }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
                if(digits.length()==0){return ans;}
                string output="";
        int index=0;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combination(digits,output,index,ans,map);
        return ans;
    }
};