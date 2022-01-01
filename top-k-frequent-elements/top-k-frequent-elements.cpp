class Solution {
public:
    
    static bool comp(pair<int,int> a , pair<int,int> b)
    {
        if(a.second < b.second) return false;
        return true;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        
        unordered_map<int, int> ans;
        vector<pair<int,int>> temp;
        
        int size = nums.size();
        
        for(int  i = 0 ; i  < size ; i++)
        {
           ans[nums[i]]++;
        }
        
        for(auto it:ans)
        {
            temp.push_back({it.first , it.second});
        }
        
        sort(temp.begin() , temp.end() , comp);
        
        vector<int> an;
        
        for(int i = 0 ; i < k ; i++)
        {
            an.push_back(temp[i].first);
        }
        
        return an;
        
    }
};