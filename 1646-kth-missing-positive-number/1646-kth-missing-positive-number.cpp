class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // for(auto it:arr){
        //     if(it<=k)k++;
        //     else{break;}
        //     }
        // return k;
        int l=0;int h=arr.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            int miss= arr[m]-(m+1);
            if(miss<k){l=m+1;}
            else{h=m-1;}
        }
        return h+k+1;
    }
};