class Solution {
public:
    
    bool isvowel(char s)
    {
        return s == 'a' || s == 'A' || s == 'e' || s == 'E' || s == 'i' || s == 'I' || s == 'o' || s == 'O' || s == 'u' || s == 'U';
    }
    string reverseVowels(string s) {
        
        string temp;
        
        for(auto it:s)
        {
            if(isvowel(it))
            {
                temp += it;
            }
        }
        
        int n = s.size();
        
        int i = 0;
        
        for(int j = n-1 ; j >= 0 ; j--)
        {
            if(isvowel(s[j]))
            {
                s[j] = temp[i];
                i++;
            }
        }
        
        return s;
        
    }
};