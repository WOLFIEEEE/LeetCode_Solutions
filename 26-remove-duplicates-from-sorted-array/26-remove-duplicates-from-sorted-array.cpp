class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k = 0;
        
        int size = nums.size();
        
        int a = 0;
        for(int j = 1 ; j < size ; j++ )
        {
            if(nums[j] != nums[k])
            {
                nums[++k] =  nums[j];
                a++;
            }
        }
        
        return a+1;
        
        
        
    }
};