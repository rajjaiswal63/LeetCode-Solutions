class Solution {
public:
    void bfs(pair<int,int>start,vector<vector<bool>>& vis, vector<vector<char>>& grid){
        int row = grid.size();
        int column = grid[0].size();

        vis[start.first][start.second] = true;

        queue<pair<int,int>>q;
        q.push(start);

        while(q.size()!=0){
            pair<int,int>front=q.front();
            q.pop();
            int r=front.first;
            int c=front.second;

            if(c+1 < column and grid[r][c+1]=='1' and vis[r][c+1]==false){
                vis[r][c+1]=true;
                q.push({r,c+1});
            }
            if(r+1 < row and grid[r+1][c]=='1' and vis[r+1][c]==false){
                vis[r+1][c]=true;
                q.push({r+1,c});
            }
            if(c>0){
                    if(grid[r][c-1]=='1' and vis[r][c-1]==false){
                    vis[r][c-1]=true;
                    q.push({r,c-1});
                }
            }
            if(r>0){
                    if(grid[r-1][c]=='1' and vis[r-1][c]==false){
                    vis[r-1][c]=true;
                    q.push({r-1,c});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int row=grid.size();
        int column=grid[0].size();

        vector<vector<bool>> vis(row, vector<bool>(column,false));

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(grid[i][j]=='1' and vis[i][j]==false){
                    pair<int,int>p={i,j};
                    bfs(p,vis,grid);
                    count++;
                }
            }
        }
        return count;
    }
};