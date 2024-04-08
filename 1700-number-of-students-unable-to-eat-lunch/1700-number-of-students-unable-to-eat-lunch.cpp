class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         int total = students.size();
        int circle=0;int sq=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0){circle++;}
            else{sq++;}
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                if(circle >0){circle--;total--;}
                else{return total;}
               
            }
            else{
                if(sq >0){sq--;total--;}
                else{return total;}
            }
        }
        
        
        return total;
    }
};