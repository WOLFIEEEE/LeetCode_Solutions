class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        
        if(nums.empty()) return res;
        
        int n = nums.size();
        sort(nums.begin() , nums.end());
        
        for(int i = 0 ; i < n ; i++)
        {
            
            long long target3 = target - nums[i];
            
            for(int j = i+1 ; j < n ; j++)
            {
                long long target2 = target3 - nums[j];
                
                int left = j+1;
                int right = n-1;
                
                while(left < right)
                {
                    long long summ = nums[left] + nums[right];
                    
                    if(summ < target2)
                    {
                        left++;
                    }
                    else if(summ > target2)
                    {
                        right--;
                    }else
                    {
                        res.push_back({nums[i] , nums[j] , nums[left] , nums[right]});
                        int l = nums[left];
                        int r = nums[right];
                        while(left < right && nums[left] == l) ++left;
                        while(left < right && nums[right] == r) --right;
                    }
                }
                
                while(j+1 < n && nums[j+1] == nums[j]) j++;
            }
            
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        
        return res;
        
        
        
    }
};