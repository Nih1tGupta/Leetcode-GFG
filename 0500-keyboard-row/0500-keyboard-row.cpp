class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int s1=0,s2=0,s3=0;
        vector<string> ans;
        for( auto &&item:words){
            int len=item.size();
            
            for(int i=0;i<len;i++){
                char c=item[i];
                if(c=='A'|| c=='a'|| c=='S' ||c=='s' ||c=='D' ||c=='d' ||c=='F' ||c=='f' ||c=='G' 
                   ||c=='g' ||c=='H'||c=='h' ||c=='J' ||c=='j' ||c=='K' ||c=='k' ||c=='L' ||c=='l'){
                    s1++;
                }
                
                else if(c=='Z' ||c=='z' ||c=='X' ||c=='x' ||c=='C' ||c=='c' ||c=='V' ||c=='v' ||
                        c=='B' ||c=='b' ||c=='N' ||c=='n' ||c=='M' ||c=='m'){
                    s2++;
                }
                
                else {
                    s3++;
                }
                
            }
            
            if(s1==len  || s2==len || s3==len){
                ans.push_back(item);
            }
            s1=0,s2=0,s3=0;
        }
        
          return ans;  
    }
};