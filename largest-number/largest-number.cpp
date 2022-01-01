class Solution {
public:
    static bool comp(string &a , string &b)
    {
        if(a+b < b+a) return false; 
        return true;
    }
    string largestNumber(vector<int>& nums) {
        
        vector<string> ans;
        
        for(auto it: nums)
        {
            ans.push_back(to_string(it));
        }
        
       sort(begin(ans), end(ans), [](string &s1, string &s2){ return s1+s2>s2+s1; });
        
        string an;
        for(auto it : ans)
        {
            an += it;
        }
        
        while(an[0]=='0' && an.length()>1)
            an.erase(0,1);
        
        return an;
        
    }
};