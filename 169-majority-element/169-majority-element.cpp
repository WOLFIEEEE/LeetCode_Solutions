class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int votes = 0;
        int cand = nums[0];
        
        for(auto it: nums)
        {
            if(it == cand) votes++;
            else votes--;
            
            if(votes < 0)
            {
                votes = 0;
                cand = it;
            }
        }
        
        return cand;
        
    }
};