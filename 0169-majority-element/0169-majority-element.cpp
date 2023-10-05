class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int digit=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(count==0)digit=arr[i];
           
            count+=(digit==arr[i])?1:-1;
        }
        return digit;
    }
};