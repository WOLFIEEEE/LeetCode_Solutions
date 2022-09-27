class Solution {
public:
    string pushDominoes(string dom) {
        
        int check = 0;
        
        vector<pair<string, string>> outs(dom.length());
        
        int j = dom.length()-1;
        
        int ff = -1;
        for(int i = 0 ; i < dom.length() ; i++)
        {
            if(dom[i] == '.')
            {
                outs[i].first = ff == -1 ? "NULL" : dom[ff] + to_string(i-ff); 
            }else
            {
                ff = i;
            }
        }
        
        ff = -1;
        for(int i = dom.length()-1 ; i >= 0 ; i--)
        {
            if(dom[i] == '.')
            {
                outs[i].second = ff == -1 ? "NULL" : dom[ff] + to_string(ff-i); 
            }else
            {
                ff = i;
            }
        }
        
        // for(auto it : outs)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        
        for(int i =0 ; i < dom.length() ; i++)
        {
            if(dom[i] == '.')
            {
                
                if(outs[i].first == "NULL")
                {
                    if(outs[i].second[0] == 'L')
                    {
                        dom[i] = 'L';
                    }
                }else if(outs[i].second == "NULL")
                {
                    if(outs[i].first[0] == 'R')
                    {
                        dom[i] = 'R';
                    }
                }else if(outs[i].first == "NULL" && outs[i].second == "NULL")
                {
                    continue;
                }else
                {
                    if(outs[i].first[0] == 'R' && outs[i].second[0]== 'L')
                    {
                        int aa = stoi(outs[i].first.substr(1));
                        int bb = stoi(outs[i].second.substr(1));
                        
                        // if(aa > bb)  cout << aa  << " Greater" << bb << endl;
                        
                        // cout << outs[i].first << " " << outs[i].second << endl;
                        // cout << aa << " " << bb << endl;
                        if(aa > bb)
                        {
                            dom[i] = 'L';
                        }else if(aa < bb)
                        {
                            dom[i] = 'R';
                        }
                    }else if(outs[i].first[0] == 'R')
                    {
                        dom[i] = 'R';
                    }else if(outs[i].second[0]== 'L')
                    {
                        dom[i] = 'L';             
                    }
                }
              
                
            }
        }
        
        return dom;
        
    }
};