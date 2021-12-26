class Solution {
public:
    int strStr(string h, string needle) {
        
        int l = needle.length();
        
        if(h == needle)
        {
            return 0;
        }
        
        
        if(h.length()==0 || h.length() < l)
        {
            return -1;
        }
        
        for (int i=0 ; i< h.length()-l+1 ; i++ )
        {
            if(h.substr(i , l) == needle)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};