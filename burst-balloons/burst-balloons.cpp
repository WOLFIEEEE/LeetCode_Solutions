class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
       
        
        int n = nums.size();
        vector<vector<int>> dp(n , vector<int> (n , 0));
        
        for(int g = 0; g < n ; g ++)
        {
            for(int i = 0 , j = g ; j < n ; i++ , j++)
            {
                    int maxx = INT_MIN;
                    
                    for(int start = i ; start <= j ; start++)
                    {
                        int left = start == i ? 0 : dp[i][start-1];
                        int right = start == j ? 0 : dp[start+1][j];
                        
                        int lval = i-1 < 0 ? 1 : nums[i-1];
                        int rval = j +1 > n-1 ? 1 : nums[j+1];
                        
                        int value = nums[start]*lval*rval + left + right;
                        
                        maxx = max(maxx , value);
                        
                    }
                    
                    dp[i][j] = maxx;
            }
        }
        
        
        return dp[0][n-1];
        
        
        
        
        return 2;
        
    }
};