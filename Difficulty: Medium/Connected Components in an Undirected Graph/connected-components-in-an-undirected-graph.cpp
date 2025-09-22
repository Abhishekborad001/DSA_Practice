class Solution {
public:
    void bfs(int start, vector<vector<int>>& adjList, vector<bool>& visited, vector<int>& component) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            component.push_back(node);

            for(int node : adjList[node]){
                if(!visited[node]){
                    visited[node]=true;
                    q.push(node);
                }
            }
        }
    }

    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        
        //Build adjacency list
        vector<vector<int>> adjList(V);
        
        for(auto it: edges){
            int u=it[0], v=it[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        
        vector<vector<int>> ans;
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                vector<int> component;
                bfs(i, adjList, visited, component);
                ans.push_back(component);
            }
        }
        return ans;
    }
};
