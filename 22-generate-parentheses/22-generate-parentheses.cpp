class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        string s = "";
        
        build(ans , s , 0 , 0 , n);
        return ans;
        
    }
    
    
    void build(vector<string> &ans , string s , int op , int cl , int max)
    {
        if(s.size() == 2*max)
        {
            ans.push_back(s);
            return;
        }
        
        if(op < max ) build(ans , s +"(" , op +1 , cl , max );
        if(cl < op)build(ans , s + ")" , op , cl +1 , max);
    }
};