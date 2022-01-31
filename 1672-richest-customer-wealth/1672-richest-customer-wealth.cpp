class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxx = INT_MIN;
        
        int m = accounts.size();
        int n = accounts[0].size();
        
        for(int i = 0 ; i < m ; i++)
        {
            int temp = 0;
            for(int j = 0 ; j < n ; j++)
            {
                temp = temp + accounts[i][j];
            }
            
            maxx = max(maxx , temp);
        }
        
        return maxx;
        
    }
};