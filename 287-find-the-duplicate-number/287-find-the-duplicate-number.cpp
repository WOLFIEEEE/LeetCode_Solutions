class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size()+1;
        
        for(auto it:nums)
        {
            int index = abs(it)-1;
            
            nums[index] *= -1;
            
            if(nums[index] > 0)
            {
                return abs(index)+1;
            }
        }
        return 0;
        
    }
};