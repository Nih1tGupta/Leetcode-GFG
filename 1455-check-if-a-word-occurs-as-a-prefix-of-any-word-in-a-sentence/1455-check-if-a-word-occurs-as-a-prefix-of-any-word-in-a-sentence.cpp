class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
       int next=1;
        int count=0;
        int j=0;
        bool condition=true;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                j=0;condition =true;next++;
            }
            else if(condition && sentence[i]==searchWord[j]){j++;}
            else{condition=false;j=0;}
            if(j==searchWord.size()){return next;}
        }
        return -1;
    }
};