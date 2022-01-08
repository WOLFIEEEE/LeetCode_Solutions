class Solution {
public:
    
    bool check( unordered_map<char , int> map , string s)
    {
        unordered_map<char , int> check;
        
        for(auto it:s)
        {
            check[it]++;
        }
        
        for(auto it:s)
        {
            if(map[it] != check[it]) return false;
        }
        
        return true;
    }
    vector<int> partitionLabels(string s) {
        
        unordered_map<char , int> map;
        for(auto it:s)
        {
            map[it]++;
        }
        
        vector<int> ans;
        
        int size = s.size();
        for(int i = 0 ; i < size ; i ++)
        {
            for(int j = 1 ; j < size-i+1; j++)
            {
                string temp = s.substr(i , j);
                
                if(check(map ,temp)) 
                {
                    
                    
                    ans.push_back(temp.size());
                    i = i + j - 1;
                    break;
                }
                
            }
        }
        
        return ans;
        
    }
};