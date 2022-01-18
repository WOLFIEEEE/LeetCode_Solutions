class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        
        int a = 0;
        
        int size = f.size();
        
        for(int i = 0 ; i < size ; i++)
        {
            
            if(f[i] == 0)
            {
            if(i == 0)
            {
                if(i+1 < size)
                {
                if(f[i+1] == 0)
                {
                    f[i] = 1;
                    a++;
                }
                }else
                {
                    a++;
                }
            }else if(i == size-1)
            {
                if(f[i-1] == 0)
                {
                    f[i] = 1;
                    a++;
                }
            }else
            {
                if(f[i-1] == 0 && f[i+1] == 0)
                {
                    f[i] = 1;
                    a++;
                }
            }
                
            }
            
            
            // if(a >= n) return true;
        }
        
        return a < n ? false : true;
        
    }
};