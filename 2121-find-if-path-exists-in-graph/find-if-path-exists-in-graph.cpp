class Solution {
public:
    void bfs(int start,vector<vector<int>>& adj, vector<bool>& vis, int end){
        queue<int>q;
        q.push(start);

        while(q.size()!=0){
            int front=q.front();
            q.pop();

            for(int j=0; j<adj[front].size(); j++){
                if(vis[adj[front][j]]==false){
                    vis[adj[front][j]]=true;
                    q.push(adj[front][j]);
                    if(adj[front][j]==end) return;
                }
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>>adj(n);

        for(int i=0; i<edges.size(); i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        vector<bool>vis(n,false);
        vis[start]=true;
        bfs(start,adj,vis,end);

        if(vis[end]==false) return false;
        return true;
    }
};