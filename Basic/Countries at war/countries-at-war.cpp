//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

string Country_at_war(int a[], int b[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1], b[n+1];

        for(int i=0;i<n;i++)
            cin>> a[i];
        
        for(int i=0;i<n;i++)
            cin>> b[i];

        cout << Country_at_war(a, b, n) << endl;

    }
    return 0;
}

// } Driver Code Ends


string Country_at_war(int a[], int b[], int n)
{
     int counta=0;  int countb=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[i]){
            continue;
        }
        else if(a[i]>b[i]){
            counta++;
        }
        else{
            countb++;
        }
        
    }
    if(counta == countb){
        return "DRAW";
    }
    else if(counta < countb){
        return "B";
    }
    else{
        return "A";
    }
}
