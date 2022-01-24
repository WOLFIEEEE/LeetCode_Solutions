class Solution {
public:
    
    bool front=false , rest = false , ch = true;
    
    
    bool detectCapitalUse(string word) {
       
        int len = word.size();
        
        for(int i = 0 ; i < len ;i++)
        {
            if(i == 0 && word[i] >= 'A' && word[i] <= 'Z')
            {
                front = true;
            }else if(word[i] >= 'A' && word[i] <= 'Z')
            {
                rest = true;
            }else
            {
                ch = false;
            }
        }
        
        
        if(rest && ch && front) return true;
        else if(rest) return false;
        
        return true;
    }
};