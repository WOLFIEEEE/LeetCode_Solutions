class Solution {
public:
    int myAtoi(string s) {
        
        int a = s.length();
        
        int i = 0 ;
        while(s[i] == ' ')
        {
            i++;
        }
        
        bool sign = false;
        
        if(s[i] =='-' || s[i] == '+')
        {
            if(s[i] == '-') sign = true;
            i++;
        }
        
        long long sum = 0;
        for(int j = i ; j <a ; j++)
        {
            if(!(s[j] >= '0' && s[j] <= '9')) break;
            
            sum = sum*10 + (s[j] - '0');
            
            if(sum > INT_MAX)
            {
                return sign ? INT_MIN : INT_MAX;
            }
        }
        
        return sign ? sum*-1 : sum;
        
    }
};