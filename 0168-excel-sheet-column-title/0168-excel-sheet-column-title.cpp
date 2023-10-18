class Solution {
public:
    string convertToTitle(int columnNumber) {
           
         string count="";
       while(columnNumber>0){
          
           count +=('A'+ (columnNumber-1)%26);
           columnNumber=(columnNumber-1)/26;
       }
       reverse(count.begin(),count.end());
       return count;
    
    }
};