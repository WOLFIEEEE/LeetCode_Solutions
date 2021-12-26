class Solution {
public:
    
    string count(string a , int k)
    {
        string temp ="";
        int count;
        while(k--)
        {
            // cout << a << endl;
            temp= "";
            int count=0;
            for(int i = 0 ; i < a.length() ; i++)
            {
                if(a[i] == a[i+1])
                {
                    count++;
                }
                else
                {
                    temp = temp + to_string(count+1) + a[i];
                    count=0;
                }
            }
            
            a = temp;
        }
        
        return a;
    }
    string countAndSay(int n) {
        
        if(n == 1) return "1";
        else if(n == 2) return "11";
        else return count("11" , n-2);
        
    }
};