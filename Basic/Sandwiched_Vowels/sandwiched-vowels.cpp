//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:
       int isVowel(char ch)

    {

        int check = 0;

        switch (ch) {

        case 'a':

        case 'e':

        case 'i':

        case 'o':

        case 'u':
            check = 1;
        }
        return check;
    }
    string Sandwiched_Vowel(string s){
             int n=s.size();

        string ans;

        ans=ans+s[0];

        for(int i=1;i<n;i++)

        {

            if(isVowel(s[i]) and !isVowel(s[i-1]) and !isVowel(s[i+1]) and i<n-1)

            continue;

            ans=ans+s[i];

        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends