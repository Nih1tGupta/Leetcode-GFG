class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
       int i=0;int j=0;int k=0;
       vector<int>v;
       int n=arr1.size() ; int m=arr2.size(); int o=arr3.size();
       while(i<n && j<m && k<o){
           if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
               v.push_back(arr1[i]);
               while(i < arr1.size()-1 && arr1[i] == arr1[i+1]){i++;}
                while(j < arr2.size()-1 && arr2[j] == arr2[j+1]){j++;}
                while(k < arr3.size()-1 && arr3[k] == arr3[k+1]){k++;}
               i++; j++; k++;
           }
           else if(arr1[i]<arr2[j]){i++;}
           else if(arr2[j]<arr3[k]){j++;}
           else{k++;}
       }
    return v;
    }
};