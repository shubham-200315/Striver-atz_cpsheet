 private:
    // Function to return a list containing the DFS traversal of the graph.
    
    
    void dfs(int node, vector<int>adj[], int vis[], vector<int> &ans)
    {
        vis[node] = 1;
        ans.push_back(node);
        for(auto i : adj[node])
        {
            if(!vis[i])
            {
                dfs(i, adj, vis, ans);
            }
            
        }
    }
    
    public: 
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]= {0};
        int node =0;
        vector<int> ans;
        dfs(node, adj, vis, ans);
        return ans;
    }
