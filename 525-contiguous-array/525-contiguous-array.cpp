class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int lz = 0;
        int lo = 0;
        
        int i = 0 , j = 0;
        
        int n = nums.size();
        
    unordered_map<int,int> map;
        
        for(int i = 0 ; i < n ; i++)
        {
            nums[i] = nums[i] == 0 ? -1 : 1;
        }
        
        int sum = 0;
        
        int maxx = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            sum = sum + nums[i];
            
            if(sum == 0)
            {
                maxx = max(maxx , i+1);
            }else if(map.find(sum) == map.end())
            {
                map[sum] = i;
            }else
            {
                maxx = max(maxx , i - map[sum]);
            }
            
        }
        
        return maxx;
        
    }
};