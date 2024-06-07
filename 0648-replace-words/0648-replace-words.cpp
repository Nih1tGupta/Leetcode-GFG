class Solution {
public:
    string solve( unordered_set<string>&st,string &word){
        for(int l=1;l<word.length();l++){
            string root= word.substr(0,l);
            if(st.count(root)){return root;}
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>st(begin(dictionary),end(dictionary));
        string ans;
        stringstream ss(sentence);
        string word;
        while (getline(ss,word,' ') ){ans+=solve(st,word)+" ";}
        ans.pop_back();
        return ans;
    }
};