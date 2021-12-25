class Solution {
public:
    string reverseWords(string s) {
        
        stringstream obj(s);
        
        string st="";
        string tmp;
        vector<string> ans;
        while(obj >> tmp)
        {
            ans.push_back(tmp);
        }
        
        reverse(ans.begin() , ans.end());
        
        int l = ans.size();
        
        for(int i=0;i<l;i++)
        {
                st = st+ans[i];
            
            if(i < l-1)
            {
                st = st + ' ';
            }
            
        }
        
        
        return st;
        
    }
};