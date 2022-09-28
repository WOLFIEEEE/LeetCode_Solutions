class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>> q;
        
        map<int,int> map;
        
        for(auto it:nums)
        {
            map[it]++;
        }
        
        for(auto it:map)
        {
            q.push({it.second , it.first});
        }
        
         vector<int> ans;
        while(k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        
        return ans;
        
        
        
    }
};