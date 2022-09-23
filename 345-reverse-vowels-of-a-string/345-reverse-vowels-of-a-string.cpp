class Solution {
public:
    
    bool isvowel(char s)
    {
        return s == 'a' || s == 'A' || s == 'e' || s == 'E' || s == 'i' || s == 'I' || s == 'o' || s == 'O' || s == 'u' || s == 'U';
    }
    string reverseVowels(string s) {
        
        int i = 0;
        int j = s.length()-1;
        
        
        bool front = true;
        bool complete = false;
        while(i < j)
        {
            
            // cout<< i << " " << j << endl;
            if(front)
            {
                if(isvowel(s[i]))
                {
                    front = false;
                }else
                {
                    i++;
                }
            }else
            {
                if(isvowel(s[j]))
                {
                    swap(s[i] , s[j]);
                    i++;
                    j--;
                    front = true;
                }else
                {
                    j--;
                }
            }
        }
        
        return s;
        
    }
};