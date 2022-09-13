class Solution {
public:
    
    vector<vector<int>> ans;
    
    void subset(vector<int> &nums , vector<int> an , int n)
    {
        if(n < 0)
        {
            ans.push_back(an);
            return;
        }
        
        an.push_back(nums[n]);
        subset(nums , an , n-1);
        an.pop_back();
        int i = 0;
        for(i = n-1 ; i >= 0 ; i --)
        {
            if(nums[i] != nums[n]) break;
        }
        subset(nums , an , i);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        subset(nums , {} , nums.size()-1);
        return ans;
        
    }
};