class Solution {
  public:
    
        // code here
         bool isPossible(vector<int>& citations, int mid){
      int n = citations.size();
       int count = 0  ;
      for(int i = 0 ; i  < n; i++){
          if(citations[i] >= mid){
              count++;
          }
      }
      return count>=mid; 
  }
  
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        
        int l = 0 ; 
        int r = n ; 
        
        int result = 0 ; 
        
        while(l<=r){
            int mid = l + (r-l)/2;
            
            if(isPossible(citations, mid)){
               result = mid ; 
               l = mid + 1; 
            }
            else r = mid -1; 
        }
        return result;
    }
};