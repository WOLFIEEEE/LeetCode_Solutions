class Solution {
public:
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
       int dp[1001] = {};
        
        for(auto it : trips)
        {
            dp[it[1]] += it[0];
            dp[it[2]] -= it[0];
        }
        
        for(int i = 0 ; capacity>= 0 && i <= 1000 ; i++)
        {
            capacity -= dp[i];
        }
        
        return capacity >= 0;
    
    }
        
};