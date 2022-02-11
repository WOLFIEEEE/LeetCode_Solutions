class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int len1 = s1.length();
        int len2 = s2.length();

        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        
        for(auto it:s1)
        {
            map1[it]++;
        }
        
        string temp = s2.substr(0 , len1);
        
        for(auto it:temp)
        {
            map2[it]++;
        }
        
        bool ans = false;
        
        for(int i = 0 ; i <= len2-len1 ; i++)
        {
            
            temp = s2.substr(i , len1);
            
            // cout << temp << endl;
            
            for(auto it : temp)
            {
                if(map1[it] == map2[it])
                {
                    ans = true;
                }else
                {
                    ans = false;
                    break;
                }
            }
            
            map2[s2[i]]--;
            map2[s2[i+len1]]++;
            
            
            if(ans) return ans;
        }
        
        
        
        return false;
    }
};