class Solution {
public:
    
    void print(vector<int> a)
    {
        for(auto it: a) cout << it << " ";
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int sum = 0;
        for(auto it:nums)
        {
            if(it%2 == 0) sum += it;
        }
        
        
        vector<int> ans;
        
        for(auto it: queries)
        {
            if(nums[it[1]]%2 == 0)
            {
                if(it[0]%2 == 0)
                {
                    sum = sum + it[0];
                    ans.push_back(sum); 
                }else
                {
                    sum = sum - nums[it[1]];
                    ans.push_back(sum);
                }
                
                 nums[it[1]] += it[0];
            }else
            {
                if(it[0]%2 != 0)
                {
                    sum = sum + it[0] + nums[it[1]];
                    ans.push_back(sum); 
                }else
                {
                    ans.push_back(sum);
                }
                
                 nums[it[1]] += it[0];
            }
        }
        
        return ans;
        
    }
};