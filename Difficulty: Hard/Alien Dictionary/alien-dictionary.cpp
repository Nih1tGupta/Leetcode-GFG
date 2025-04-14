//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string findOrder(vector<string> &words) {
        int V=26;
        vector<int>adj[V];
        
        int n = words.size();
        unordered_set<int> st;
        
        for(int i=0; i<n; i++){
            for(char c:words[i]){
                st.insert(c-'a');
            }
        }
        
        for(int i=1; i<words.size(); i++){
            string f = words[i-1];
            string s = words[i];
            int len1= f.size();
            int len2 = s.size();
            int j = 0;
            bool flag = false;
            while(j<min(len1, len2)){
                if(f[j] != s[j]){
                    adj[f[j]-'a'].push_back(s[j]-'a');
                    flag = true;
                    break;
                }
                j++;
            }
            
            if(flag==false){
                if(len1 > len2) return"";
            }
            
        }
        
        vector<int> indegree(V, 0);
        for(int i=0; i<V; i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int>q;
        for(int i=0; i<V; i++){
            if(st.find(i) != st.end() && indegree[i] == 0){
                q.push(i);
            }
        }
        
        
        vector<int> res;
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for(auto nbr:adj[curr]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
        
        string ans = "";
         if(res.size()!=st.size())return ans;
        
        for(int i=0; i<res.size(); i++){
            ans.push_back(res[i]+'a');
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.

bool validate(const vector<string> &original, const string &order) {
    unordered_map<char, int> mp;
    for (const string &word : original) {
        for (const char &ch : word) {
            mp[ch] = 1;
        }
    }
    for (const char &ch : order) {
        if (mp.find(ch) == mp.end())
            return false;
        mp.erase(ch);
    }
    if (!mp.empty())
        return false;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    for (int i = 0; i < original.size() - 1; i++) {
        const string &a = original[i];
        const string &b = original[i + 1];
        int k = 0, n = a.size(), m = b.size();
        while (k < n and k < m and a[k] == b[k]) {
            k++;
        }
        if (k < n and k < m and mp[a[k]] > mp[b[k]]) {
            return false;
        }
        if (k != n and k == m) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        string curr;
        vector<string> words;
        while (ss >> curr)
            words.push_back(curr);

        vector<string> original = words;

        Solution ob;
        string order = ob.findOrder(words);

        if (order.empty()) {
            cout << "\"\"" << endl;
        } else {
            cout << (validate(original, order) ? "true" : "false") << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends