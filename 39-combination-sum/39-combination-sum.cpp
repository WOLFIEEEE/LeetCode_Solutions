class Solution {
public:
    
    vector<vector<int>> ans;
    void recur(vector<int>& a , int target , int index , vector<int> temp)
    {
        
        if(index >= a.size())
            return;
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        
        if(target < 0) return;
        
        
        if(a[index] <= target)
        {
        temp.push_back(a[index]);
        recur(a , target-a[index] , index , temp);
        temp.pop_back();
        }
        recur(a , target , index+1 , temp);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        
        recur(candidates , target , 0 ,temp);
        return ans;
        
    }
};