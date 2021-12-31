class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int low = 0 ;
        int high = nums.size()-1;
        
        if(high == 0) return 0;
        
        while(low <= high)
        {
            int mid =  (low + high)/2;
            
            cout << mid << endl;
            
            int size = nums.size()-1;
            if(mid > 0  && mid < size && nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) 
            {
                return mid;
            }
            else if(mid > 0 && nums[mid-1] > nums[mid]) high = mid-1;
            else low = mid+1;
        }
        
        if(nums[0] > nums[1]) return 0;
        else return nums.size()-1;
        
    }
};