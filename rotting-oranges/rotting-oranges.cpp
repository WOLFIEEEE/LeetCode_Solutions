class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> rtn ;
        int total_count = 0 ;
        
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ;j++)
            {
                if(grid[i][j] != 0)
                {
                    total_count++;
                }
                
                if(grid[i][j] == 2)
                {
                    rtn.push({i,j});
                }
                
                if(grid[i][j] != 1)
                {
                    grid[i][j] = -1;
                }
            }
        }
        
        
        int total_time = 0;
        int dx[] = {0 , 0 ,1 , -1};
        int dy[] = {1 , -1 , 0 , 0};
        
        int check = 0 ;
        while(!rtn.empty())
        {
            int k = rtn.size();
            // cout << k << endl;
            while(k--)
            {
                pair<int,int> temp = rtn.front();
                rtn.pop();
                int nx = temp.first;
                int ny = temp.second;
                    for(int i  = 0 ; i < 4 ; i ++)
                    {
                            int x = nx + dx[i];
                            int y = ny + dy[i];

                        if(x < 0 || y < 0 || x >= m || y >= n || grid[x][y] == -1)
                        {
                            continue;
                        }

                        rtn.push({x , y});
                        grid[x][y] = -1;
                    }
                
                check++;
                
            }
            if(!rtn.empty())
            total_time++;
            
        }
        
        
        return check == total_count ? total_time : -1;
        
    }
};