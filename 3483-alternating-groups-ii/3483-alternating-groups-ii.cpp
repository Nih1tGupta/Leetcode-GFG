class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int maxi=1;
        int c=0;
        int n=colors.size();
        for(int i=1;i<=n+k-2;i++){
            if(colors[i%n]!=colors[(i-1+n)%n]){maxi++;}
            else{maxi=1;}
            if(maxi>=k){c++;}
        }
        return c;
    }
};