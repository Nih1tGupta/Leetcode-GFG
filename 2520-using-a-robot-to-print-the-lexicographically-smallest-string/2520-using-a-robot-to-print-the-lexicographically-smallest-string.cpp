class Solution {
public:
string robotWithString(string s) {
    //    string res = "";
    //     string t = "";
    //     int i = 0;
    //     while (i < s.length()) {
    //         t += s[i];
    //         i++;
    //     while (!t.empty() && (i == s.length() || t.back() <= *min_element(s.begin() + i, s.end()))) {
    //     res += t.back();
    //     t.pop_back();
    //     }
    // }
    // return res;
    // n^2
    int n=s.length();
    vector<char>v(n);
    v[n-1]=s[n-1];
    for(int i=n-2;i>=0;i--){
        v[i]= min(s[i],v[i+1]);
    }
string t=""; string res="";
int i=0;
while(i<n){
    t.push_back(s[i]);
    char ch= (i+1<n)?v[i+1]:s[i];
    while(!t.empty() and t.back()<=ch){res+=t.back();t.pop_back();}
i++;
}
while(!t.empty()){res+=t.back(); t.pop_back();}
return res;
}
};