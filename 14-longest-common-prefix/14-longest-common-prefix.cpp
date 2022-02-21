class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string temp = strs[0];
        int length = 0;

        
        for(int j = 1 ; j <strs.size() ; j++)
        {
            
            string s = strs[j];
            length=0;
            for(int i = 0 ; i < strs[j].length() ; i++)
            {
                if(temp[i] == s[i])
                {
                    length = i+1 ;
                }else
                {
                    break;
                }
            }
            
            temp = temp.substr(0 , length);
        }
        
      
        return temp;
        
    }
};