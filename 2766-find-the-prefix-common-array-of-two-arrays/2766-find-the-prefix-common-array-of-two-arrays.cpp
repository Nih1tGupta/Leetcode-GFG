class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>v;
        for(int i=0;i<A.size();i++){
            int c=0;
            for(int j=0;j<=i;j++){
                for(int k=0;k<=i;k++){
                    if(B[k]==A[j])c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};