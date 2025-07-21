class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>v;
        // int i=0;int j=0;
        // int n1=nums1.size(); int n2=nums2.size();
        // while(i<n1 && j<n2){
        //     if(nums1[i]<=nums2[j]){ v.push_back(nums1[i]);i++;}
        //     else{v.push_back(nums2[j]);j++;}   
        // }
        // while(i<n1){v.push_back(nums1[i]);i++;}
        // while(j<n2){v.push_back(nums2[j]);j++;}
        // int n3=(v.size()/2);
        // int n4=n3-1;
        // if(n3%2){return v[n3];}
        // return  (double)(v[n4]+v[n3])/2.0;
        int i=0;int j=0; int n1=nums1.size(); int n2=nums2.size();
        int ele1=-1; int ele2=-1;
        int n=(n1+n2);  int n3=n/2;  int n4=n3-1;int cnt=0;
        while(i<n1 and j<n2){
            if(nums1[i]<=nums2[j]){
                if(cnt==n3){ele1=nums1[i];}
                if(cnt==n4){ele2=nums1[i];}
                cnt++;i++;
            }
            else{
                if(cnt==n3){ele1=nums2[j];}
                if(cnt==n4){ele2=nums2[j];}
                cnt++;j++;
            }
        }
        while(i<n1){
            if(cnt==n3){ele1=nums1[i];}
                if(cnt==n4){ele2=nums1[i];}
                cnt++;i++;
        }
        while(j<n2){
            if(cnt==n3){ele1=nums2[j];}
                if(cnt==n4){ele2=nums2[j];}
                cnt++;j++;
        }
        if(n%2){return ele1;}
        return (double)((double)(ele1+ele2))/2.0;


    }
};