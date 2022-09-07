class Solution {
public:
    
    int out = 0;
    int dp[101][101];
    int ans(int m , int n , int i , int j)
    {
        if(i > m || j > n) return 0;
        if(i == m && j == n) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = ans(m , n , i+1 , j) + ans(m , n , i , j+1);
    }
    int uniquePaths(int m, int n) {
        memset(dp ,-1 , sizeof(dp));
        
        return ans(m-1 , n-1 , 0 , 0);
    }
};