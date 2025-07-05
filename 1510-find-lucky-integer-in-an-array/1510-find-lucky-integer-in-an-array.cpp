class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>ans;
        for(int i=0; i<arr.size(); i++)
        {
            ans[arr[i]]++;
        }
        int maxi=-1;
        for(int i=0; i<arr.size(); i++)
        {
            if(ans[arr[i]]==arr[i])
            {
                if(arr[i]>maxi)
                {
                    maxi=arr[i];}}}
         
        return maxi;
    }
};