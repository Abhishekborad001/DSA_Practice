class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

       vector<int> row(m, 0);
       vector<int> col(n, 0);

        // make row and col 1 if there is any element whose value is 0.
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        //make 0 whose row and col is 1 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    if(row[i]==1 || col[j]==1){
                        matrix[i][j]=0;
                    }
            }
        }
    }
};