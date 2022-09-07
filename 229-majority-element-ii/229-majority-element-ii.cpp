class Solution {
public:
    
    bool check(vector<int>& nums , int cand)
    {
        int n =  nums.size()/3;
        
        int c = 0;
        
        for(auto it:nums)
        {
            if(it == cand) c++;
        }
        
        if(c > n) return true;
        return false;
    }
    vector<int> majorityElement(vector<int>& nums) {
        
        int size = nums.size();
        
        if(size == 1) return nums;
        
        int cand1 , cand2;
        int vot1 = 0;
        int vot2 = 0;
        
        for(auto it: nums)
        {
            
            if(it == cand1)
            {
                vot1++;
            }
            else if(it == cand2)
            {
                vot2++;
            }
            else if(vot1 == 0)
            {
                cand1 = it;
                vot1++;
            }else if(vot2 == 0)
            {
                cand2 = it;
                vot2++;
               
            }else
            {
                vot1--;
                vot2--;
            }
        }
        
        vector<int> ans;
        
        if(check(nums, cand1)) ans.push_back(cand1);
        if(check(nums, cand2)) ans.push_back(cand2);
        
        return ans;
        
    }
};