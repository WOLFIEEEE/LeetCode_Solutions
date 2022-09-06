class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int l = intervals.size();
        
        if(l==0)
        {
            return intervals;
        }
        sort(intervals.begin() , intervals.end());
        
        vector<vector<int>> ans;
        
        
        int minn = intervals[0][0];
        int maxx = intervals[0][1];
        
        for(int i = 1 ; i < l ; i++)
        {
            if(maxx >= intervals[i][0])
            {
                maxx = max(maxx , intervals[i][1]);
            }else
            {
                ans.push_back({minn,maxx});
                minn = intervals[i][0];
                maxx = intervals[i][1];
            }
        }
        
        ans.push_back({minn, maxx});
        
        return ans;
        
        
    }
};