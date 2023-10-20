class Solution {
public:
    string reverseWords(string s) {
        string words; string ans;
       
        int n =s.length()-1;
        for(int i=n; i>=0; i--)
        {
            if(s[i]!=' ')
            {
                words.push_back(s[i]);
                    if((i>0 && s[i-1]==' ') || (i==0))
                    {
                        for(int j=words.length()-1; j>=0; j--)
                        {
                            ans.push_back(words[j]);
                        }
                        ans.push_back(' ');
                        words.clear();}}}
        ans.pop_back();
        return ans;
    }
};









