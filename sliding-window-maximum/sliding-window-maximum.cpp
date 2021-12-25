class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> qq;
        
        int size = nums.size();
        
        vector<int> ans;
        for(int i = 0 ; i <size ; i ++ )
        {
            if(qq.empty())
            {
                qq.push_back(i);
                if(k == 1)
                {
                    ans.push_back(nums[qq.front()]);
                }
                continue;
            }
            
            while(!qq.empty() && qq.front() <= i-k)
            {
                qq.pop_front();
            }
            
            while(!qq.empty() && nums[qq.back()] <= nums[i])
            {
                qq.pop_back();
            }
            
            qq.push_back(i);
            
            if(i>= k-1)
            {
                ans.push_back(nums[qq.front()]);
            }
            
        }
        
        return ans;
        
    }
};