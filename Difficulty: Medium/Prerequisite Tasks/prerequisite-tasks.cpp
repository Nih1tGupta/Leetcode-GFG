//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& p) {
	   vector<int>adj[N];
	   for(auto &it:p){adj[it.first].push_back(it.second);}
	   int indegree[N]={0};
	   for(int i=0;i<N;i++){
	       for(auto &it:adj[i]){indegree[it]++;}
	   }
	   queue<int>q;int c=0;
	   for(int i=0;i<N;i++){if(indegree[i]==0)q.push(i);}
	   vector<int>v;
	   while(!q.empty()){
	       int fr=q.front();q.pop();c++;
	       for(auto it:adj[fr]){
	           indegree[it]--;
	           if(indegree[it]==0){q.push(it);}
	           
	       }
	       
	   }
	   if(c==N)return true;
	   return false;
	   
	   
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends