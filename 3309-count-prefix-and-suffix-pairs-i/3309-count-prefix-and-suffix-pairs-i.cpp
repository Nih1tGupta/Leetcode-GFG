class Solution {
public:
bool f(const string &s1,const string &s2){
    if(s1.size()>s2.size())return 0;
    return s2.substr(0,s1.size())==s1 and s2.substr(s2.size()-s1.size())==s1;
}
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;int n = words.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (f(words[i], words[j])) {
                count++;
            }
        }
    }
    return count;
    }
};