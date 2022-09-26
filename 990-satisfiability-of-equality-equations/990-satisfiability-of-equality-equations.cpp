class Solution {
public:
    
    int vf[26];
    
    int find(int x)
    {
        return vf[x] == x ? x : vf[x] = find(vf[x]);
    }
    
    bool equationsPossible(vector<string>& equations) {
        
        for(int i = 0 ; i < 26 ; i++)
        {
            vf[i] = i;
        }
        
        for(auto it : equations)
        {
            if(it[1] == '=')
            {
                vf[find(it[0] - 'a')] = find(it[3] - 'a');
            }
        }
        
        for(auto it: equations)
        {
            if(it[1] == '!')
            {
                if(vf[find(it[3]-'a')] == vf[find(it[0]-'a')]) return false;
            }
        }
        
        return true;
        
    }
};