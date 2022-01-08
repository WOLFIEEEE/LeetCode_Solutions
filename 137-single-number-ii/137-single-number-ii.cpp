class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> map;
        
        for(auto it:nums) map[it]++;
        
        for(auto it:nums)
        {
            if(map[it]==1) return it;
        }
        
        return 0;
        
        
        
    }
};