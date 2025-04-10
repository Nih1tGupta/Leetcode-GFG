class Solution {
public:
    long long solve(string &str,int limit,string suffix){
        // base
        if(suffix.length()>str.length()){return 0;}
        int remLength=str.length()-suffix.length();
        string remString=str.substr(remLength);
        // iterating for blank pos.
        long long ct=0;
        for(int i=0;i<remLength;i++){
            int digit=str[i]-'0';
            if(limit>=digit){
                ct+=(digit*pow(limit+1,remLength-i-1));
            }
            else{
                ct+=pow(limit+1,remLength-i);
                return ct;
            
            }
        }
        if(suffix<=remString){ct+=1;}
        return ct;
    }
    long long numberOfPowerfulInt(long long st, long long f, int limit, string s) {
        // BRUTE FAILS!!!!!
        string start=to_string(st-1);
        string finish= to_string(f);
        return solve(finish,limit,s)- solve(start,limit,s);
    }
};