class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int> map , map1;
        
        for(auto it:s)
        {
            map[it]++;
        }
        
        for(auto it : t)
        {
            map[it]--;
        }
        
        for(auto it : t)
        {
            if(map[it] == -1) return it;
        }
        
        return 'a';
        
    }
};