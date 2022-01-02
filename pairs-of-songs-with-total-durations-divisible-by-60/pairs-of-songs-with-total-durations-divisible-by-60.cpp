class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int n = time.size();
        
        int count = 0;
        
        unordered_map<int,int> map;
        
        for(int i = 0 ; i < n ; i++)
        {
            time[i] = time[i]%60;
        }
        
        count =  0;
        for(auto it:time)
        {
            
            cout << it << " " << 60-it << endl;
            
            int find = it == 0 ? 0 : 60-it;
            if(map.find(find) == map.end())
            {
                map[it]++;
            }else
            {
                count = count + map[find];
                map[it]++;
            }
        }
        
        
        return count;
        
    }
};