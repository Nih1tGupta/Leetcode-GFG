class Solution {
public:
    int minMaxDifference(int num) {
        string temp=to_string(num);
        string temp2=to_string(num);
        int n=temp.size();
        // first non 9 to 9   // first non zero to 0
        char ch1; char ch2;
        for(int i=0;i<n;i++){
            if(temp[i]!='9'){ch1=temp[i];break;}
        }
        for(int i=0;i<n;i++){
            if(temp2[i]!='0'){ch2=temp2[i];break;}
        }
        for(int i=0;i<n;i++){
            if(temp[i]==ch1){temp[i]='9';}
        }
        for(int i=0;i<n;i++){
            if(temp2[i]==ch2){temp2[i]='0';}
        }
        int maxi=stoi(temp); int mini=stoi(temp2);
        return maxi-mini;
    }
};