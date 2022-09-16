class Solution {
public:
    
    vector<vector<int>> dp;
    int solve(int i , int nn , int j , vector<int> &n ,  vector<int> &m)
    {
        if(j >= m.size()) return 0;
        
        if(dp[i][j] != INT_MIN) return dp[i][j];
        
        int left = n[i]*m[j] + solve(i+1 , nn , j+1 , n , m);
        int right = n[(nn-1)-(j-i)]*m[j] + solve(i , nn , j+1 , n , m);
        
        return dp[i][j] = max(left , right);
        
        
    }
    int maximumScore(vector<int>& nums, vector<int>& mult) {
        
        int n = nums.size();
        int m = mult.size();
        
        dp.resize(m + 1, vector<int>(m + 1, INT_MIN));
        
        return solve(0 , n , 0 , nums , mult);
        
        
        
        
        
        
        
        
    }
};