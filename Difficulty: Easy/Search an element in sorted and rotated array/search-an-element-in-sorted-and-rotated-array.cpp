//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) {
    //code here
    int l=0;int h=vec.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(vec[mid]==K){return mid;}
         if( vec[mid]>=vec[l]){
            if(K>=vec[l] and K<=vec[mid]){h=mid-1;}
            else{l=mid+1;}
        }
        else{
             if(K>=vec[mid] and K<=vec[h]){l=mid+1;}
            else{h=mid-1;}
        }
    
    }
    
        return -1;
}