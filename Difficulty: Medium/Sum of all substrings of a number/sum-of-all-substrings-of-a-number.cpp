class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        // int sum=0;
        // for(int i=0;i<s.length();i++){
        //     int cs=0;
        //     for(int j=i;j<s.length();j++){
        //         cs=cs*10+(char(s[j])-'0');
        //         sum+=cs;
        //     }
        // }
        // return sum;
        int n=s.length();
        vector<int>v(n,0);
        v[0]=(char(s[0]-'0'));
        int result= v[0];
        for(int i=1;i<n;i++){
            int digit=char(s[i]-'0');
            v[i]= (i+1)*digit + 10*(v[i-1]);
            result+=v[i];
        }
    return result;
    }
};