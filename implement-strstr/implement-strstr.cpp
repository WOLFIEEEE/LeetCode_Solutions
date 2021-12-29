class Solution {
public:
    
    vector<int> lps(string needle)
    {
        vector<int> ans;
        
        int n =  needle.length();
        
        
        ans.push_back(0);
        int len = 0;
        int j = 1;
        while(j < n)
        {
            if(needle[len] == needle[j])
            {
                ans.push_back(len+1);
                len++;
                j++;
            }else
            {
                if(len != 0)
                {
                    len = ans[len-1];
                }else
                {
                    ans.push_back(0);
                    j++;
                }
            }
        }
        
        return ans;
    }
    int strStr(string h, string needle) {
        
        
        vector<int> lp = lps(needle);
        
        int ch = needle.length();
        
        int  i = 0;
        int j = 0;
        int len = h.length();
        
        if(ch == 0 && len == 0) return 0;
        if(len == 0 || len < ch) return -1;
        if(h == needle || ch == 0) return 0;
        
        while(i < len)
        {
            
           
            if(h[i] == needle[j])
            {
                i++;
                j++;
            }else
            {
                if(j != 0)
                {
                    j = lp[j-1];
                }else
                {
                    i++;
                }
            }
            
            
             if(j == ch)
            {
                return i-j;
            }
            
            
        }
        return -1;
        
    }
};