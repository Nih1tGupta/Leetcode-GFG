class Solution {
  public:
     string add_string(string s1,string s2){
       int i=s1.length()-1; int j=s2.length()-1;
       int carry=0;string ans="";
       while(i>=0 || j>=0 || carry){
           int sum=carry;
           if(i>=0){sum+=s1[i--]-'0';}
            if(j>=0){sum+=s2[j--]-'0';}
            int rem= sum%10;
            carry=sum/10;
            ans.push_back(rem+'0');
       }
       reverse(ans.begin(),ans.end());
       return ans;
   }


  bool check(string S,int start,int len1,int len2,int n){
     string s1=S.substr(start,len1);
     string s2=S.substr(start+len1,len2);
     string s3= add_string(s1,s2);
     int s3_len=s3.length();
     if(s3_len>n-len1-len2-start){return false;}
  
     if(s3==S.substr(start+len1+len2,s3_len)){
         if(len1+len2+start+s3_len==n){return true;}
         return check(S,start+len1,len2,s3_len,n);
     }
      return false;
    }
    int isSumString(string S){
        int n=S.size();
        for(int i=1;i<n;i++){
            for(int j=1;i+j<n;j++){
                if(check(S,0,i,j,n)){
                    return true;
                }
            }
        }
        return false;
    }
};