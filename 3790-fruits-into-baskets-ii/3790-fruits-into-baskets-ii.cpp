class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int up=0;
        for(int i=0;i<f.size();i++){
            int ele=f[i];
            for(int j=0;j<b.size();j++){
                if(b[j]>=ele){
                    b[j]=-1;
                    break;
                }
                if(j==b.size()-1){up++;}
            }
        }
        return up;
    }
};