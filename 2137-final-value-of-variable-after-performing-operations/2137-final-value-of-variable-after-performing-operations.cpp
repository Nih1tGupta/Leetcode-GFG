class Solution {
public:

    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;
        int n=operations.size();
        for(int i=0;i<n;i++){
        
            if(operations[i]=="--X") a--;
            else if(operations[i]=="X--")a--;
            else if(operations[i]=="X++")a++;
            else if(operations[i]=="++X")a++;
        }
        return a;
  
    }
};