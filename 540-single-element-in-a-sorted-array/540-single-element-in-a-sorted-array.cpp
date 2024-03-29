class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size()-1;
        
        
        while(low < high)
        {
            int mid = (low+high)/2;
            
            // cout << low << " " << high <<endl;
            
            if(nums[mid] == nums[mid^1])
            {
                low = mid+1;
            }else
            {
                high = mid;
            }
        }
        
        return nums[high];
        
    }
};