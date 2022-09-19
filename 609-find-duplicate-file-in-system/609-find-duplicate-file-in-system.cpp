class Solution {
public:
    
    
    bool checktxt(int i ,  string s)
    {
        return s.substr(i,3) == "txt";
    }
    
    string gettext(int i , string s)
    {
        string temp;
        while(s[i] != ')')
        {
            temp += s[i];
            i++;
        }
        
        return temp;
    }
    
    
    string getroottext(int i , string s)
    {
        string temp;
        for(auto it:s)
        {
            if(it == ' ')
            {
                break;
            }
            
            temp += it;
        }
        
        return temp;
    }
    string getintext(int i , string s)
    {
        string temp;
        for(int j = i ; j >= 0 ; j--)
        {
            if(s[j] == ' ' || s[j] == ')')
            {
                break;
            }
            
            temp = temp + s[j];
        }
        
        reverse(temp.begin() , temp.end());
        
        return temp;
    }
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        
        unordered_map<string , vector<string>> map;
        for(auto it:paths)
        {
            for(int i = 0 ; i < it.size() ; i++)
            {
                bool first = true;
                string root;
                if(it[i] == 't')
                {
                    if(checktxt(i , it))
                    {
                        if(first)
                        {
                            root = getroottext(i , it);
                        }
                        
                        map[gettext(i+3 , it)].push_back(root +"/" +getintext(i+2 , it));
                    }
                }
            }
        }
        
        vector<vector<string>> ans;
        for(auto it:map) if(it.second.size() >= 2) ans.push_back(it.second);
        
        return ans;
        
    }
};