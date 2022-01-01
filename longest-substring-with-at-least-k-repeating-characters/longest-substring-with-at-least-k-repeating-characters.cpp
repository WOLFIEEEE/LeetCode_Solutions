class Solution {
public:
    int longestSubstring(string s, int k) {
        
        if(s.size() == 0 || s.size() < k) return 0;
        
        if(k == 0) return s.size();
        
        unordered_map<char,int> map;
        
        int n = s.size();
        
        for(int i = 0 ; i < n ; i++)
        {
            map[s[i]]++;
        }
        
        int ind = 0;
        
        while(ind < n && map[s[ind]] >= k) ind++;
        
        if(ind == n) return n;
        
        int left = longestSubstring(s.substr(0 , ind) , k);
        int right = longestSubstring(s.substr(ind+1) , k);
        
        return max(left , right);
        
        
        
    }
};