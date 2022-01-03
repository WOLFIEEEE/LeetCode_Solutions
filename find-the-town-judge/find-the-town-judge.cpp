class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int,int> map;
        unordered_map<int,int> mapt;
        for(auto it:trust)
        {
            map[it[1]]++;
            mapt[it[0]]++;
        }
        
        for(int i = 1 ; i <= n ;i++)
        {
            if(map[i] == n-1 && mapt.find(i) == map.end())
            {
                return i;
            }
        }
        
        return -1;
        
        
    }
};