class Solution {
public:
int first(vector<int>&a,int k){
    int l=0;int h=a.size()-1;int n=a.size();
    int f=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==k){f=mid;h=mid-1;}
        else if(a[mid]<k){l=mid+1;}
        else{h=mid-1;}
    }
    return f;
}

int last(vector<int>&a,int k){
    int l=0;int h=a.size()-1;int n=a.size();
    int la=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==k){la=mid;l=mid+1;}
        else if(a[mid]<k){l=mid+1;}
        else{h=mid-1;}
    }
    return la;
}
    vector<int> searchRange(vector<int>& nums, int t) {
        int firstt=first(nums,t);
        if(firstt==-1)return {-1,-1};
        int lastt=last(nums,t);
        return {firstt,lastt};
    }
};