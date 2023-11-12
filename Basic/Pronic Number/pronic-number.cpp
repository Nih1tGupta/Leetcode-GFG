//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   vector<int> pronicNumbers(int N)  {
        vector<int> pronic;
        int i=1, num = 0;
        while(num<=N) {
            pronic.push_back(num);
            num = i*(i+1);
            i++;
        }
        return pronic;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        
        vector<int> ans = ob.pronicNumbers(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends