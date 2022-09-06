class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size()+1;
        
        vector<int> check(n , 0);
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            check[nums[i]-1]++;
        }
        
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(check[i] > 1) return i+1;
        }
        
        return 0;
        
    }
};