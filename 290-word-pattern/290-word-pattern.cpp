class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,int> ch;
        unordered_map<string,int> sr;
        
        vector<int> aa;
        vector<int> bb;
        
        int chc = 0;
        int src = 0;
        
        int size = pattern.size();
        
        for(auto it:pattern)
        {
            if(ch.find(it) == ch.end())
            {
                ch[it] = chc;
                chc++;
            }
            
            bb.push_back(ch[it]);
        }
        
        vector<string> as;
        
        string temp="";
        for(auto k:s)
        {
            if(k == ' ')
            {
                as.push_back(temp);
                temp = "";
            }else
            {
                temp.push_back(k);
            }
        }
        
        as.push_back(temp);
        
        for(auto it:as)
        {
            if(sr.find(it) == sr.end())
            {
                sr[it] = src;
                src++;
            }
            
            aa.push_back(sr[it]);
        }
        
        if(aa.size()!= bb.size()) return false;
        
        for(int i = 0 ; i < aa.size() ; i++)
        {
            if(aa[i] != bb[i]) return false;
        }
        
        return true;
        
        
    }
};