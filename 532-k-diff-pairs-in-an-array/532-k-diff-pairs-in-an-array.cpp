class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin() , nums.end());
        
        
        unordered_map<int,int> m;
        set<pair<int,int>> ve;        
        
        for(auto it:nums)
        {
            if(m.find(it-k) != m.end())
            {
                ve.insert({it , it-k});
            }
            
            m[it]++;
        }
        return ve.size();
        
    }
};