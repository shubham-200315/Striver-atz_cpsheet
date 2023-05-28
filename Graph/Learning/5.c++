public:
    void bfs(int node , int vis[], vector<int> adj[], vector<int> &ans)
    {
        queue<int> q;
        q.push(node);
        vis[node] = 1;
        while(!q.empty())
        {
            int frontNode =q.front();
            q.pop();
            ans.push_back(frontNode);
            for(auto i : adj[frontNode])
            {
                if(!vis[i])
                {
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int node = 0;
        vector<int> ans;
        bfs(node, vis, adj, ans);
        return ans;
    }
