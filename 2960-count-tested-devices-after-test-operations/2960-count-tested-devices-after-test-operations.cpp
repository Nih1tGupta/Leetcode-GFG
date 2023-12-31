class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count=0;
        int n=batteryPercentages.size();
        for(int i=0;i<n;i++){
            if(batteryPercentages[i]>0){
                count++;
                for(int j=i+1;j<n;j++){
                    batteryPercentages[j]=max(batteryPercentages[j]-1,0);
                }
            }
        }
        return count;
    }
};