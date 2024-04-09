class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // BRUTE FORCE
         int ans = 0;int n=tickets.size();
    // for (int i = 0; i < tickets.size(); ++i)
    //   if (i<=k)
    //     ans += min(tickets[i], tickets[k]);
    //   else
    //     ans += min(tickets[i], tickets[k] - 1);
    // return ans;
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){q.push({tickets[i],i});}
        while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();x--;ans++;
        if(x==0){
            if(y==k){break;}
            // else{continue;}
        }
        else{q.push({x,y});}
        }
        return ans;
    }
};