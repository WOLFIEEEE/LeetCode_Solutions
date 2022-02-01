class Solution {
public:
    int maxProfit(vector<int> nums)
{
    int minn = INT_MAX;
    int maxx = INT_MIN;

    int profit = 0;
    for(int i=0 ; i < nums.size() ; i++)
    {
        minn = min(minn, nums[i]);
        
        profit = max(profit , nums[i] - minn);
    }

    return profit;
}
};