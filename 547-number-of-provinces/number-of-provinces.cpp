class Solution {
public:
    void dfs(int i,vector<vector<int>>& isConnected,vector<bool> &visited){
        visited[i] = true;
            for(int j=0; j<isConnected.size(); j++){
                if(isConnected[i][j]==1 and visited[j]==false){
                    visited[j]=true;
                    dfs(j,isConnected,visited);
                }
            }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<bool>vis(n,false);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(i,isConnected,vis);
                count++;
            }
        }
        return count;
    }
};