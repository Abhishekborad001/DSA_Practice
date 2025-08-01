class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col0=1;

   
        // mark 1st row and 1st col to track
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;

                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }

        //make 0 whose 1st col or 1st row is 0. 
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                    if(matrix[i][j]!=0){
                        if(matrix[0][j]==0 || matrix[i][0]==0){
                            matrix[i][j]=0;
                        }
                    }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }

        if(col0==0){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};