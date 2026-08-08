class Solution {
public:

    void bfs(queue<pair<int,int>> &q,vector<vector<int>>& v,vector<vector<char>>& grid){

        int row=grid.size();
        int col=grid[0].size();
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            grid[x][y]='0';
            q.pop();
            
            int dx[4]={-1,0,1,0};
            int dy[4]={0,1,0,-1};

            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];

                if(nx >=0 && nx <row && ny >=0 && ny <col && v[nx][ny]==0 && grid[nx][ny]=='1'){

                    v[nx][ny]=1;
                    q.push({nx,ny});
                    grid[nx][ny]='0';
                }
            }

        }
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        
        queue<pair<int,int>> q;
        int cnt=0;
        int row = grid.size();
        int col=grid[0].size();
        vector<vector<int>> v(row,vector<int>(col,0));

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    cout<<"in"<<endl;
                    q.push({i,j});
                    bfs(q,v,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
