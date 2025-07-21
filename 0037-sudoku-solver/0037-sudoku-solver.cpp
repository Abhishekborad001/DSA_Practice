class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig){

        // horizontal
        for(int j=0; j<9; j++){
            if(board[row][j] == dig){
                return false;
            }
        }

        //vertical
        for(int i=0; i<9; i++){
            if(board[i][col] == dig) return false;
        }

        // grid
        int sr = (row/3) * 3;
        int sc = (col/3) * 3;
        for(int i=sr; i<= sr+2 ; i++){
            for(int j=sc; j<=sc+2; j++){
                if(board[i][j]==dig) return false;
            }
        }
        return true;

    }
    bool helper(vector<vector<char>>& board, int row, int col){
            int NRow = row, NCol = col+1;

            if(row == 9) return true;

            if(NCol == 9){
                NRow = row+1;
                NCol = 0;
            }
            if(board[row][col] != '.'){
                return helper(board, NRow, NCol);
            }

            //place the digit
            for(char dig='1'; dig<='9'; dig++){
                if(isSafe(board, row, col, dig)){
                    board[row][col]=dig;
                    if(helper(board, NRow, NCol)){
                        return true;
                    }
                    board[row][col]= '.';

                }
            }
            return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0 ,0);

    }
};