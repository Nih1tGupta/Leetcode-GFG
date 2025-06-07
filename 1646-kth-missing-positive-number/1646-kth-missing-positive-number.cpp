class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    //     int num=1;
    //     int i=0;
    //     while(i<arr.size() and k>0){
    //         if(arr[i]==num){i++;}
    //         else{k--;}
    //     num++;
    //     }
    //     while(k--){num++;}
    // return num-1;

    // 2 3 4 7 11
    // 1 2 3 4 5
    // 1 1 1 3 6 - differnce(mtlb kitne missing hai yha tak) nums[i]- actual[i]  ~ nums[i]-(i+1)
    int l=0;int h=arr.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        int miss_till_mid= arr[mid]-(mid+1);
        if(miss_till_mid<k){l=mid+1;}
        else{h=mid-1;}
    }
    return l+k;
    }
};