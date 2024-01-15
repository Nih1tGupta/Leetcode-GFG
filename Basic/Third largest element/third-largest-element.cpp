//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         if(n<3){  NORMAL
             return -1;
         }
         
         int largest = a[0];
         int sLargest = -1;
         int tLargest = -1;
         for(int i=1 ; i<n; i++){
             if(a[i]>largest){
                 tLargest = sLargest;
                 sLargest = largest;
                 largest = a[i];
             } else if(a[i]!=largest && a[i]>sLargest){
                 tLargest = sLargest;
                 sLargest = a[i];
             } else if(a[i]!=sLargest && a[i]>tLargest){
                 tLargest = a[i];
             }
         }
         return tLargest;
     
     priority_queue<int,vector<int>,greater<int>>pq;//min heap
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]); 
            if(pq.size()>3){
                pq.pop();
            }
        }
        return pq.top();
        }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends