class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> map;
        int maxx = 0;
        
        int st = 0;
        int en = 0;
        
        int size = s.length();
        
        for(int i = 0 ; i < size ; i++)
        {
            
            cout << st << " " << en << endl;
            if(map[s[i]] == 0)
            {
                en++;
                map[s[i]]++;
            }else
            {
                while(map[s[i]] != 0)
                {
                    map[s[st]]--;
                    st++;
                }
                
                i--;
            }
            
            maxx = max(maxx , en-st);
        }
        
        return maxx;
        
    }
};