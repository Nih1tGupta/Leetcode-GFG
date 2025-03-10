class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int c=0;
        int n=word.length();
        for(int i=0;i<n;i++){
            int a=0;int e=0;int ii=0;int o=0;int u=0;
            int con=0;
            for(int j=i;j<n;j++){
                char ch=word[j];
                if(ch=='a'){a++;}
                else if(ch=='e'){e++;}
                else if(ch=='i'){ii++;}
                else if(ch=='o'){o++;}
                else if(ch=='u'){u++;}
                else{con++;}
                if((a>=1 and e>=1) and (ii>=1 and o>=1) and (u>=1 and con==k)){c++;}
            }
            
        }
        return c;
    }
};