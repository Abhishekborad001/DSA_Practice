class Solution {
  public:
  
    void helper(vector<vector<int>>& maze, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &vis){
        
        int n= maze.size();
        if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || vis[r][c]==true) return;
        
        if(r==n-1 && c==n-1){ // ans
            ans.push_back(path);
            return;
        }
        
        vis[r][c]=true;
        
        helper(maze, r+1, c, path+"D", ans, vis);  // down
        helper(maze, r-1, c, path+"U", ans, vis); // up
        helper(maze, r, c+1, path+"R", ans, vis); // right
        helper(maze, r, c-1, path+"L", ans, vis);  // left
        
        vis[r][c] = false;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n= maze.size();
        vector<string> ans;
        string path = "";
        vector<vector<bool>> vis(n, vector<bool>(n,false));
        
        helper(maze, 0, 0, path, ans, vis);
        sort(ans.begin(), ans.end());
        return ans;
    }
};