class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n= nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;
        vector<int> ans(2,-1);
        
        if(n==0)
        {
            return ans;
        }
        
        if(n == 1)
        {
            if(nums[0]==target)
            {
                return {0,0};
            }else
            {
                return ans;
            }
        }
        
       

        
         if(nums[0]== target)
        {
            ans[0]=0;
             
             if(nums[1] != target)
             {
                 ans[1]=0;
                 return ans;
             }
        }
        else
        {
        while(low <= high)
        {
           
            mid = (low + high)/2;
            // cout << low <<" "<< high <<" " << mid <<" "<< endl;
            if(nums[mid]== target && nums[mid-1] != target)
            {
                ans[0]=mid;
                break;
            }
            else if(nums[mid] == target)
            {
                high= mid;
            }
            
            if(nums[mid] < target)
            {
                low = mid+1;
            }
            
            if(nums[mid]> target)
            {
                high = mid-1;
            }
        }
        }
        
        low= mid;
        high = n-1;
        
        if(nums[n-1]==target)
        {
            ans[1]=n-1;
            
            if(nums[n-2]!=target)
            {
                ans[0] = n-1;
                return ans;
            }
        }
        else
        {
        while(low <= high)
        {
            // cout << low <<" "<< high <<" " << mid <<" "<< endl;
            mid = (low + high)/2;
            
            if(nums[mid]== target && nums[mid+1] != target)
            {
                ans[1]=mid;
                break;
            }
            else if(nums[mid] == target)
            {
                low= mid + 1;
            }
            
            if(nums[mid] < target)
            {
                low = mid+1;
            }
            
            if(nums[mid]> target)
            {
                high = mid-1;
            }
        }
        }
        

        
        
       return ans; 
    }
};