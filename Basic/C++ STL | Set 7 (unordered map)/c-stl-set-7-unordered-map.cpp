//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_value(unordered_map<int,int> &m,int x,int y);

int find_value(unordered_map<int,int> &m,int x);

int getSize(unordered_map<int,int> &m);

void removeKey(unordered_map<int,int> &m,int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		unordered_map<int,int> m;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x,y;
				cin>>x>>y;
				add_value(m,x,y);
			}
			if(c=='b')
			{
				int y;
				cin>>y;
				cout<<find_value(m,y)<<" ";
			}	
			if(c=='c')
			{
				cout<<getSize(m)<<" ";
			}
			if(c=='d')
			{
				int x;
				cin>>x;
				removeKey(m,x);
			}
			
		
		}
cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete below methods */

/*Inserts an entry with key x and value y in map */
void add_value( unordered_map< int, int >& m, int x, int y ) {
    m[ x ] = y;
}
int find_value( unordered_map< int, int >& m, int x ) {
      auto it=m.find(x);
      if(it==m.end()) {
          return -1;
      }
      else {

          return m[x];
      }

}
int getSize( unordered_map< int, int >& m ) {
    return m.size();
}
void removeKey( unordered_map< int, int >& m, int x ) {
    m.erase( x );
}