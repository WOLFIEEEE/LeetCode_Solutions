class Solution {
public:
    
    vector<vector<string>> ans;
        
    bool ispal(string s , int start , int end)
    {
        while(start <= end)
        {
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        
        return true;
    }
    
    
    void solve(string s ,  int index , vector<string> t)
    {
        if(index >= s.size())
        {
            ans.push_back(t);
        }
        
       for(int i = index ; i < s.size() ; i++)
       {
           string temp = s.substr(index , i - index + 1);
           
           bool check = ispal(temp , 0 , temp.size()-1);
           
           if(check)
           {
               t.push_back(temp);
               solve(s , i+1 , t);
               t.pop_back();
           }
       }
    }
    vector<vector<string>> partition(string s) {
        vector<string> t;
        solve(s , 0 , t);
        return ans;
        
    }
};