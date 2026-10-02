class Solution {
public:
    void bfs(int i,vector<vector<int>>& isConnected,vector<bool> &visited){
        visited[i] = true;
        queue<int>q;
        q.push(i);

        while(q.size()!=0){
            int top=q.front();
            q.pop();

            for(int j=0; j<isConnected.size(); j++){
                if(isConnected[top][j]==1 and visited[j]==false){
                    visited[j]=true;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<bool>vis(n,false);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                bfs(i,isConnected,vis);
                count++;
            }
        }
        return count;
    }
};