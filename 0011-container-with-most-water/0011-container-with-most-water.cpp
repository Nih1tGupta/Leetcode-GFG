class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea= 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int h = min(height[i],height[j]);
        //         int w = j-i;
        //         maxArea = max(maxArea,h*w);
        //     }
        // }
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