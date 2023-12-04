class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0;int j=moves.length()-1;int count1=0,count2=0,count3=0,count4=0;
        for(int i=0;i<=j;i++){
            if(moves[i]=='U'){count1++;}
           if(moves[i]=='D'){count2++;}
            if(moves[i]=='R'){count3++;}
            if(moves[i]=='L'){count4++;}
        }
        if(count1==count2 &&count3==count4){return true;}
        return false;
    }
};