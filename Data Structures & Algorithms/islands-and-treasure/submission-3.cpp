
#define INF 2147483647
class Solution {
public:
    void bfs(queue<pair<int,int>> &q,vector<vector<int>>& grid,vector<vector<int>> v){

        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        int row=grid.size();
        int col=grid[0].size();
        while(!q.empty()){

            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            v[x][y]=1;
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx >=0 && nx<row && ny >=0 && ny <col && v[nx][ny]==0 && grid[x][y]<grid[nx][ny] ){
                    v[nx][ny]=1;
                    grid[nx][ny]=grid[x][y]+1;
                    q.push({nx,ny});
                }
            }

            
        }
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> v(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                    bfs(q,grid,v);
                    for(int k=0;k<row;k++){
                        for(int l=0;l<col;l++){
                            v[k][l]=0;
                        }
                    }

                }
            }
        }
      

        
    }
};
