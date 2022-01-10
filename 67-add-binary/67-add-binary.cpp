class Solution {
public:
    string addBinary(string a, string b) {
        
       char car='0' ;
        string sum;
        
        int al = a.length();
        int bl = b.length();
        string ans;
        int i = al-1;
        int j = bl-1;
        while(i >= 0 && j >= 0)
        {
            
            // cout << car << " " << a[i] << " " << b[j] << endl;
            if(a[i] == '1' && b[j] == '1')
            {
                if(car == '1')
                {
                    sum = sum + '1';
                    car = '1';
                }else
                {
                    sum = sum + '0';
                    car = '1';
                }
            }else if (a[i] == '0' && b[j] == '0')
            {
                if(car == '1')
                {
                    sum = sum + '1';
                    car = '0';
                }else
                {
                    sum = sum + '0';
                    car = '0';
                }
            }else
            {
                if(car == '1')
                {
                    sum = sum + '0';
                    car = '1';
                }else
                {
                    sum = sum + '1';
                    car = '0';
                }
            }
            
           
            
            i--;
            j--;
        }
        
        
         while(j >= 0) {
            if(car == '1')
                {
                    if(b[j] == '1')
                    {
                         sum = sum + '0';
                         car = '1';
                    }else
                    {
                        sum = sum + '1';
                        car = '0';
                    }
                }else
                {
                    sum = sum + b[j];
                    car = '0';
                }
            j--;
        }
        
        while(i >= 0) {
            if(car == '1')
                {
                    if(a[i] == '1')
                    {
                         sum = sum + '0';
                         car = '1';
                    }else
                    {
                        sum = sum + '1';
                        car = '0';
                    }
                }else
                {
                    sum = sum + a[i];
                    car = '0';
                }
            i--;
        }
        
        if(car == '1') sum = sum + '1';
        reverse(sum.begin() , sum.end());
        
        return sum;
        
    }
};