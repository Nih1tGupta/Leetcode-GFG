class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>v(n,0);
        for(int i=0;i<code.size();i++){
            if(k>0){
                for(int j=i+1;j<i+k+1;j++){v[i]+=code[j%n];}
            }
            else{
                for(int j=i-1;j>i+k-1;j--){v[i]+=code[(j+n)%n];}
            }
        }
        return v;
    }
};