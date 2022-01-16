class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int s = seats.size();
        
        int left = -1;
        int right = s;
        
        vector<pair<int,int>> vec(s , {0,0});
        
        int ans = 0;
        int distance =  0;
        
        for(int i = 0 ; i < s ; i++)
        {
            if(seats[i] == 1)
            {
                left = i;
            }else
            {
                vec[i].first = left;
            }
        }
        
        for(int i = s-1; i >= 0 ; i --)
        {
            if(seats[i] == 1)
            {
                right = i;
            }else
            {
                vec[i].second = right;
            }
        }
        
        
        int minn = -1;
        
        // for(auto it:vec)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        
        for(int i = 0 ; i < s ; i++)
        {
            if(seats[i] == 0)
            {
                if(vec[i].first == -1)
                {
                    minn = vec[i].second - i;
                    
                    if(minn > ans)
                    {
                        ans = minn;
                    }
                }else if(vec[i].second == s)
                {
                    minn = i - vec[i].first;
                    
                    if(minn > ans)
                    {
                        ans = minn;
                    }
                }else
                {
                    int ldis = vec[i].second - i;
                    int rdis = i - vec[i].first;
                    
                    // cout << ldis << " " << rdis << endl;
                     int m = min(ldis , rdis);
                    
                    if(m > ans)
                    {
                        // cout << ans << endl;
                        
                        ans = min(ldis , rdis);
                    }
                }
            }
        }
        
        
        return ans;
        
    }
};