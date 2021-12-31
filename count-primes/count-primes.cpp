class Solution {
public:
    int countPrimes(int n) {
        
        if(n == 0 || n == 1) return 0;
       vector<bool> check(n , true);
        
        for(int i =  2 ; i*i < n ; i++)
        {
            if(check[i])
            {
            for(int j = i ; j * i < n ; j++)
            {
                check[i*j] = false;
            }
            }
        }
        
        
        return count(check.begin() , check.end() , true)-2;
        
    }
};