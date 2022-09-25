class Solution {
public:
    int dp[1001][1001];
    bool check(int i , int j , int k , string s1 , string s2 , string s3)
    {
        
        // cout << i << " " << j << " " << k << endl;
        if(i >= s1.length() && j >= s2.length()) return true;
        
        if(k >= s3.length())return false;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        bool a = false;
        bool b = false;
        
        if(i < s1.length() && s1[i] == s3[k])
        {
            a = check(i+1 , j , k+1 , s1 , s2 , s3);
        }
        
        if(j <  s2.length() && s2[j] == s3[k])
        {
            b = check(i , j+1 , k+1 ,s1 , s2 , s3);
        }
        
        return dp[i][j] = a || b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        
        if(s1.length() + s2.length() != s3.length()) return false;
        memset(dp , -1, sizeof(dp));
        return check(0 , 0 , 0 , s1 , s2 ,s3);
        
    }
};