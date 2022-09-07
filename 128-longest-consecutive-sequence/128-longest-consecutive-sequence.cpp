class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    unordered_map<int,int> map;
    int n = nums.size();
    int max=0;
    int count=0;

    for(int i=0;i<n;i++)
    {
        map[nums[i]]=i;
    }

    for(int i=0;i<n;i++)
    {

        if(map.find(nums[i]-1)==map.end())
        {   
            count=1;
            int j=1;
            while(true)
            {
                if(map.find(nums[i]+j)!= map.end())
                {
                    j++;
                    count++;
                }
                else
                {
                    break;
                }

            }
        }

        if(max<count)
        {
            max=count;
        }
    }
    return max;
}
};