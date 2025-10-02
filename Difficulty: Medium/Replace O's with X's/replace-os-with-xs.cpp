// User function Template for C++

class Solution {
  private:
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<char>>& mat){
        int n = mat.size();
        int m = mat[0].size();
        vis[row][col]=1;
        int drow[] ={-1,0,0,1};
        int dcol[]= {0,1,-1,0};
        
        for(int i=0; i<4; i++){
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && mat[nrow][ncol]=='O'){
                dfs(nrow, ncol, vis, mat);
            }
        }
    }
  public:
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        for(int j=0; j<m; j++){
            //first row
            if(!vis[0][j] && mat[0][j] == 'O'){
                dfs(0,j,vis,mat);
            }
            
            //last row
            if(!vis[n-1][j] && mat[n-1][j] == 'O'){
                dfs(n-1,j,vis,mat);
            }
        }
        
        for(int i=0; i<n; i++){
            //first col
            if(!vis[i][0] && mat[i][0] == 'O'){
                dfs(i,0,vis,mat);
            }
            
            //last col
            if(!vis[i][m-1] && mat[i][m-1] == 'O'){
                dfs(i,m-1,vis,mat);
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && mat[i][j] == 'O'){
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};