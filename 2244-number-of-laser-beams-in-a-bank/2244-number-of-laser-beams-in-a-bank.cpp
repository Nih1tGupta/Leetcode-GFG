class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(); int ans=0;
        int prev= count(bank[0].begin(),bank[0].end(),'1');
        for(int i=1;i<n;i++){
            int curr= count(bank[i].begin(),bank[i].end(),'1');
            ans+=(curr*prev);
            if(curr!=0){prev=curr;}
        }
        return ans;
    }
};