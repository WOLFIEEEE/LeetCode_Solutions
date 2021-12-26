class Solution {
public:
    string longestPalindrome(string s) {
        
        int a = s.length();
        
        int dp[a][a];
        memset(dp , 0 ,sizeof(dp));
        
        int start = 0 ;
        int maxlen = 1;
        
        for(int i = 0 ; i < a ; i++)
        {
            dp[i][i] = 1;
            
            if(i+1 < a)
            {
                if(s[i] == s[i+1])
                {
                    start = i;
                    dp[i][i+1] = 1;
                    maxlen = 2;
                }
            }
        }
        
        
        for(int k = 3 ;  k <=a ; k++)
        {
            for(int i = 0 ; i < a-k+1; i++)
            {
                 int j = i + k -1;
                
                if(s[i] == s[j] && dp[i+1][j-1] == 1)
                {
                    dp[i][j] = 1;
                   
                    if(k > maxlen)
                    {
                        start = i ;
                        maxlen = k; 
                    }
                }
            }
        }
        
        return s.substr(start , maxlen);
        
        
        
    }
};