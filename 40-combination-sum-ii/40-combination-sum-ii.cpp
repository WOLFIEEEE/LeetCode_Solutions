class Solution {
public:
    
    vector<vector<int>>ans;
    
    void solve(vector<int>& can, int target , int n , vector<int> temp)
    {
        if(target == 0) 
        {
            ans.push_back(temp);
            return;
        }
        if(n < 0) return;
        
        if(can[n] <= target)
        {
            temp.push_back(can[n]);
            solve(can , target-can[n] , n-1 , temp);
            temp.pop_back();
        }
        
        int i = 0;
        for( i = n-1 ; i >= 0 ; i--)
        {
            if(can[i] != can[n]) break;
        }
        
        solve(can , target , i , temp);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        sort(can.begin() , can.end());
        solve(can , target , can.size()-1 , {});
        return ans;
        
    }
};