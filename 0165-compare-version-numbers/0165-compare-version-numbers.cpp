class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1=version1.length();int n2=version2.length();
        int i=0;int j=0;
        while(i<n1 || j<n2){
            int a=0;int b=0;
            while(i<n1 and version1[i]!='.'){a=a*10 +(version1[i]-'0');i++;}
            cout<<n1<< " ";
            while(j<n2 and version2[j]!='.'){b=b*10 +(version2[j]-'0');j++;}
            cout<<n2<<" ";
            if(a>b){return 1;}

            else if(b>a){return -1;}
            i++;j++;
        }
        return 0;
    }
};