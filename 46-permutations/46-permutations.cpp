class Solution {
public:
    
    vector<vector<int>> ans;
    
    void per(vector<int> &nums , vector<int> temp , vector<bool> freq)
    {
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
        }
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(freq[i])
            {
                temp.push_back(nums[i]);
                freq[i] = false;
                per(nums , temp , freq);
                freq[i] = true;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<bool> freq(nums.size() , true);
        per(nums , {} , freq);
        return ans;
        
    }
};