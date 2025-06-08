class Solution {
public:
    void solve(int i,vector<int>&v,int n){
        if(i>n)return;
        v.push_back(i);
        for(int j=0;j<=9;j++){
            int num=i*10+j;
            if(num>n)continue;
            solve(num,v,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        for(int i=1;i<=9;i++){
            solve(i,v,n);
        }
    return v;
    }
};