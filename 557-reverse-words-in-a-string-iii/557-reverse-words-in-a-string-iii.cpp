class Solution {
public:
    string reverseWords(string s) {
        
        string temp;
        string ans;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] != ' ') temp.push_back(s[i]);
            else
            {
                
                if(temp != "") 
                {
                    reverse(temp.begin() , temp.end());
                    ans += temp + " ";
                }
                temp = "";
            }
        }
        
        reverse(temp.begin() , temp.end());
        
        return ans+temp;
        
    }
};