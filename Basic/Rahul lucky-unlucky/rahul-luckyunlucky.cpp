//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int flippedIndexes(char a[], int n, int getAnswer[])
    {
         vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]=='T')

            {
                a[i]='H';
              if(a[i+1]=='T')
              a[i+1]='H';
              else
              a[i+1]='T';
              v.push_back(i+1);

            }
        }
        for(int i=0;i<v.size();i++){
            getAnswer[i]=v[i];}
        return v.size();
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;

    while(t--){
       
        int n;
        cin >> n;
        char a[n];
        
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        int getAnswer[n]={0};
        Solution ob;
        int count = ob.flippedIndexes(a, n, getAnswer);
        if(count > 0){
            cout << count << endl ;
            for(int i=0;i<count;i++)
            cout << getAnswer[i] << " ";
            cout << endl;
        }
        else
            cout << count << endl << "-1" << endl;
    }
}

// } Driver Code Ends