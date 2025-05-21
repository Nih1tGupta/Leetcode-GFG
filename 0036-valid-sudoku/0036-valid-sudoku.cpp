class Solution {
public:
bool isvalid(vector<vector<char>> &board,char c,int row,int col){
       board[row][col] = '#';
       for(int i=0;i<9;i++){

                if(board[row][i] == c)return false;
    
                if(board[i][col] == c)return false;
       
                if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == c)return false;
        }
       board[row][col] = c;
        return true;
        
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    char c = board[i][j];
                    if(!isvalid(board,c,i,j))return false;
                }
            }
        }
        return true;
      
         
    
        
    }
};