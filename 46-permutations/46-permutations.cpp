class Solution {
public:
    
    vector<vector<int>> ans;
    
    void per(vector<int> &nums , int index)
    {
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i = index ; i < nums.size() ; i++)
        {
            swap(nums[i] , nums[index]);
            per(nums , index+1);
            swap(nums[i] , nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        per(nums , 0);
        return ans;
        
    }
};