class Solution {
public:
    int maxArea(vector<int>& height) {
        // WIDTH KAM HO RIH TOH JYADA HEIGH LE KE CHALO
        // 0(N) AND O(1);
        int i=0;int j=height.size()-1;
        int maxi=0;
        while(i<j){
            int mini=min(height[i],height[j]);
            int area= (j-i)*mini;
            maxi= max(maxi,area);
            if(height[i]<height[j]){i++;}
            else{j--;}
        }
        return maxi;
    }
};