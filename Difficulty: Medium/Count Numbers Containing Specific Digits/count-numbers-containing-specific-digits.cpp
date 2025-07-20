class Solution {
  public:
  
    int solve(int n,unordered_set<int>ex){
        // first digit ke liye
        
        int ch=0;
        for(int i=1;i<=9;i++){
            if(ex.find(i)==ex.end()){ch++;}
        }
        // for rest
        int include=10-ex.size();
        int rest= pow(include,n-1);
        return rest*ch;
    }
    int countValid(int n, vector<int>& arr) {
        unordered_set<int>exclude(arr.begin(),arr.end());
        int tc=9* pow(10,n-1);
        int bad= solve(n,exclude);
        return tc-bad;
    }
};
