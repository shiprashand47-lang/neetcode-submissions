class Solution {
public:
    int bfs(int i,int j,vector<vector<int>>& grid){

        int row=grid.size();
        int col=grid[0].size();
        int cnt=0;
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){

            int x=q.front().first;
            int y=q.front().second;

            q.pop();
            int dx[4]={-1,0,1,0};
            int dy[4]={0,1,0,-1};
            for(int k=0;k<4;k++){

                int nx=x+dx[k];
                int ny=y+dy[k];

                if(nx >=0 && nx < row && ny >=0 && ny <col && grid[nx][ny]==1){
                    grid[nx][ny]=0;
                    cnt++;
                    q.push({nx,ny});
                }
            }
        }
        if(cnt==0) return 1;
        return cnt;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){

                if(grid[i][j]==1){

                    count=max(count,bfs(i,j,grid));
                }
            }
        }
        return count;
    }
};
