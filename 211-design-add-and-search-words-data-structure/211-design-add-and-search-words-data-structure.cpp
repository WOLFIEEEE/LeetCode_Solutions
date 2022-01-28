class WordDictionary {
public:
    
    unordered_map<int , vector<string>> map;
    WordDictionary() {
        
        
    }
    
    void addWord(string word) {
        
        int size = word.size();
        map[size].push_back(word);
    }
    
    bool search(string word) {
        
        int s = word.size();
        
        if(map.find(s) == map.end()) return false;
        
        vector<pair<int,char>> temp;
        for(int i = 0 ; i < s ; i++)
        {
            if(word[i] != '.')
            {
                temp.push_back({i , word[i]});
            }
        }
        
        if(temp.size() == 0) return true;
        
        int pos = temp[0].first;
        char ch = temp[0].second;
        
        for(int i = 0 ; i < map[s].size() ; i++)
        {
            
            string ss = map[s][i];
            if(ch == ss[pos])
            {
                for(int j = 0 ; j < temp.size() ; j++)
                {
                    pos = temp[j].first;
                    ch = temp[j].second;
                    
                    if(ch != ss[pos]) break;
                    if(j == temp.size()-1) return true;
                }
            }
        }
        
        
        return false;
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */