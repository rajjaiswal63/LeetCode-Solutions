class Solution {
public:
    void bfs(int intial, vector<bool>& vis, vector<vector<int>>& rooms){
        queue<int>q;
        q.push(intial);

        while(q.size()!=0){
            int front=q.front();
            q.pop();

            for(int i=0; i<rooms[front].size(); i++){
                if(vis[rooms[front][i]]==false){
                    vis[rooms[front][i]]=true;
                    q.push(rooms[front][i]);
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);

        vis[0]=true;
        bfs(0,vis,rooms);

        for(int i=0; i<n; i++){
            if(vis[i]==false) return false;
        }
        return true;
    }
};