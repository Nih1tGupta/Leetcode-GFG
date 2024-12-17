class Solution {
public:
    string repeatLimitedString(string s, int lt) {
        string res="";
        vector<int>v(26,0);
        for(char &ch:s){v[ch-'a']++;}
        int i=25;
        while(i>=0){
            if(v[i]==0){i--;continue;}
                int times=min(v[i],lt);
                // res+=string(i+'a',times);
                char ch='a'+i;
                res.append(times,ch);
            v[i]-=times;
            // agar ab bhi bacha hai...
            if(v[i]>0){
                int j=i-1;
                while(j>=0 and v[j]==0){j--;continue;}
                if(j<0){break;}
                res+=(j+'a');
                v[j]--;
            }
        }
        return res;
    }
};