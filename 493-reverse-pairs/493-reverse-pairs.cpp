class Solution {
public:
    
    int merge(vector<int>& nums , int low , int mid , int high)
    {
        int total = 0;
        
        int j = mid+1;
        
        for(int i = low ; i <= mid ; i++)
        {
            
            while(j <= high  && nums[i] > 2LL * nums[j])
            {
                j++;
            }
            
            total += j -( mid +1);
        }
        
        vector<int> temp;
        
        int left =  low;
        int right = mid+1;
        
        while(left <= mid && right <= high)
        {
            if(nums[left] < nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }
        
        while(left <= mid)
        {
           temp.push_back(nums[left]);
            left++; 
        }
        while(right <= high)
        {
           temp.push_back(nums[right]);
            right++; 
        }
        
        for (int i = low; i <= high; i++) 
        {
            nums[i] = temp[i - low];
        }
        
        return total;
    }
    
    int mergesort(vector<int>& nums , int low , int high)
    {
        if(low >= high) return 0;
        int mid = (low+high)/2;
        
        int inv = 0;
        inv += mergesort(nums , low , mid );
        inv += mergesort(nums , mid+1 , high);
        inv+= merge(nums , low , mid , high);
        
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        
       int size = nums.size();
        return mergesort(nums , 0 , size-1);
        
    }
};