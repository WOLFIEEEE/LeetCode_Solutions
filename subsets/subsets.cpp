class Solution {
public:
    
    set<vector<int>> ans;
    void count(vector<int> nums , int i , int n , vector<int> s)
    {
        if(i == n)
        {
            ans.insert(s);
            return;
        }
        
        s.push_back(nums[i]);
        count(nums , i+1 , n , s);
        s.pop_back();
        count(nums , i +1 , n , s);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> s;
        count(nums ,  0 , nums.size() , s);
        vector<vector<int>> out;
        out.assign(ans.begin() , ans.end());
        return out;
    }
};