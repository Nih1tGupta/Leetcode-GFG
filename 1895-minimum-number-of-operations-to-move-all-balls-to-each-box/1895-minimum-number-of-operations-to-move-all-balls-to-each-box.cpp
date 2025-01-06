class Solution {
public:
    vector<int> minOperations(string b) {
        int n=b.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i+1;j<n;j++){
                if(b[j]=='1'){c+=(j-i);}
            }
             for(int k=0;k<=i;k++){
                if(b[k]=='1'){c+=(i-k);}
            }
            v[i]=c;
        }
        return v;
    }
};