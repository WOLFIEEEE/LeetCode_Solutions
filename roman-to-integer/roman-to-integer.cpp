class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> map = {
            {'I' , 1},
            {'V' ,5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };
        
        int sum = map[s.back()];
        
        int n = s.length()-1;
        
        for(int i = n-1; i >=0 ; i--)
        {
            
            if(map[s[i]] < map[s[i+1]])
            {
                sum = sum - map[s[i]];
            }else
            {
                sum = sum + map[s[i]];
            }
        }
        
        return sum;
        
    }
};