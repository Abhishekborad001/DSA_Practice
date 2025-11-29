class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        prefix = vector<vector<int>>(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(j==0){
                    prefix[i][0] = matrix[i][0];
                }
                else{
                    prefix[i][j] = prefix[i][j-1] + matrix[i][j];
                }
            }
            
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1; i<=row2; i++){
            if(col1 == 0){
                sum += prefix[i][col2];
            }
            else{
                sum += prefix[i][col2] - prefix[i][col1-1];
            }
             
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */