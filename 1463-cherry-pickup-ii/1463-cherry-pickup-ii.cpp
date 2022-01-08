class Solution {
public:
    int dp[80][80][80];
    
    
    
    
    int solve(vector<vector<int>>& grid ,int m ,int n , int r , int c1 , int c2)
    {
        
        // cout << r << " " << c1 << " " << c2 << endl;
        if(r == m) return 0;
        
        int col1 = c1;
        int col2 = c2;
        
        int ans = 0;
        
        if(dp[r][col1][col2] != -1) return dp[r][col1][col2];
        
        for(int d1 = -1 ; d1  <= 1 ; d1 ++)
        {
            for(int d2 = -1 ;d2 <= 1 ; d2 ++)
            {
                col1 = c1 - d1 ;
                col2 = c2 - d2 ; 
                
                if(col1 >= 0 && col2 >= 0 && col1 < n && col2 < n )
                {
                    ans = max(ans , solve(grid , m ,n , r+1 , col1 , col2));
                }
            }
        }
        
        int che = c1 == c2 ? grid[r][c1] : grid[r][c1] + grid[r][c2];
        
         return dp[r][c1][c2] = ans + che;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp , -1 , sizeof(dp));
        int rows = grid.size();
        int cols = grid[0].size();
        
        return solve(grid, rows , cols , 0 , 0 , cols-1);
        
    }
};