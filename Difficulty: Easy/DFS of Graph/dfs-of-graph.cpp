class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
       int v = adj.size();
       vector<int>ans;
       vector<bool>visited(v,false);
       stack<int>st;
       
       st.push(0);
       
       while(!st.empty()){
           int node = st.top();
           st.pop();
           
           if(!visited[node]){
               visited[node]=true;
               ans.push_back(node);
               
               for(auto it = adj[node].rbegin(); it != adj[node].rend(); it++){
                   if(!visited[*it]){
                       st.push(*it);
                   }
               }
           }
       }
       return ans;
    }
};