class Solution {
public:
    
    string give_range(vector<int>& nums  , int &i)
    {
        int start = nums[i];
        int end = -1;
        bool check = false;
        int temp = start;
        
        int j = 0;
        for(j = i+1 ; j < nums.size() ; j++)
        {
            temp = temp + 1;
            if(nums[j] != temp) break;
            check = true;
            end = nums[j];
        }
        
        i = j;
        
        if(check)
        {
            return to_string(start)+"->" + to_string(end);
        }else
        {
            return to_string(start);
        }
    }
    vector<string> summaryRanges(vector<int>& nums) {
        
        int i = 0;
        
        int n = nums.size();
        
        vector<string> ans;
        
        while(i < n)
        {
            ans.push_back(give_range(nums , i));
        }
        
        return ans;
        
    }
};