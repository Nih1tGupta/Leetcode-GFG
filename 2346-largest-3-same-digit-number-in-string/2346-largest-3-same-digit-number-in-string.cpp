class Solution {
public:
    string largestGoodInteger(string num) {
         string maxi="";string str="";
        if(num.length()<3){return maxi;}
        for(int i=0;i<num.length()-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                str=num.substr(i,3);
                if(str>maxi){maxi=str;}
            }
        }
       return maxi;
    }
};