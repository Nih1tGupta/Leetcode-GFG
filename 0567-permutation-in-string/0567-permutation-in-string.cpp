class Solution {
public:
    // int n; bool res;
    // void solve(int idx,string &s1,string &s2){
    //     if(idx==n){
    //         if(s2.find(s1)!=string:npos){res=true;}
    //         return;
    //     }
    //     for(int i=idx;i<n;i++){
    //         swap(s1[i],s1[idx]);
    //         solve(idx+1,s1,s2);
    //         swap(s1[i],s1[idx]);
    //         if(res==true)return true;
    //     }
    // }
    bool checkInclusion(string s1, string s2) {
        // PERMUTATION NIKAL LO S1 KA - N!
        // PHIR N TIMESD ITERATE KARO CHECK KARO
        //  N!*N  : O(S1.LENGTH)) REC STACK SPACE->>>>>>>>>>>>>>>> TLE
        // n=s1.length();
        // res=false;
        // solve(0,s1,s2);
        // return res;

    // better
    // O(M-N)*(NLOGN) : O(N)
    //  har ek s1 size ka substring lo s2 se
    //  sort kar ke compare karlo bas

    // OPTIMAL
    // SLIDING WINDOW
    vector<int>v1(26,0);
    vector<int>v2(26,0);
    int i=0;int j=0;
    for(char ch:s1){v1[ch-'a']++;}
    while(j<s2.length()){
         v2[s2[j]-'a']++;
         if(j-i+1 >s1.length()){
            v2[s2[i]-'a']--;
            i++;
         }
         if(v1==v2)return 1;
         j++;
    }
    return 0;
    }
};