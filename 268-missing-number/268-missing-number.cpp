class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        bool zz = false;
        
        for(int i = 0 ; i < nums.size() ; i++) nums[i]++;
        for(auto it:nums)
        {
            int index = abs(it)-1;
            if(index < nums.size()) nums[index] *= -1;
        }
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] > 0)
            {
                return i;
            }
        }
        
        return nums.size();
        
    }
};