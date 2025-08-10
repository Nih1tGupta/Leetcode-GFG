class Solution {
    public int countPS(String s) {
        // code here
             int n = s.length();
        int count = 0;
        for(int i =0;i<n;i++){
            int forw = i+1;
            int back = i-1;
            
            while(back>=0  && forw <n){
                if(s.charAt(forw) == s.charAt(back)){
                    count++;
                     forw++; back--;
                }
                else break;
            }
            forw = i+1;
            back =i;
            while(back>=0  && forw <n){
                     if(s.charAt(forw) == s.charAt(back)){
                    count++;
                     forw++; back--;
                }
                else break;
            }
        }
        
        return count;
    }
}