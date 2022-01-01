class Solution {
public:
    int trailingZeroes(int n) {
        
        int result=0;
        
        for(int i = 5 ; n/i > 0 ; i = i*5)
        {
            result = result + n/i;
        }
        
        return result;
        
        
        
    }
};