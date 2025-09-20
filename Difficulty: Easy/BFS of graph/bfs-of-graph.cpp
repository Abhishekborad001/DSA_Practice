class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size();
        vector<int>ans;
        vector<bool>visited(n,false);
        queue<int>q;
        
        q.push(0);
        visited[0]=true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int it:adj[node]){
                if(!visited[it]){
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
        return ans;
        
    }
};