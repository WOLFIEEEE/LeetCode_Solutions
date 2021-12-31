class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        unordered_map<char , string> map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        
        int n = digits.length();
        
        if(n == 0) return {};
        
        else if(n==1)
        {
            vector<string> ans;
            string s = map[digits[0]];
            for(int i=0 ; i < s.length(); i++)
            {
                string  p;
                
                p.assign(1 , s[i]);
                ans.push_back(p);
            }
            
            return ans;
        }else if(n == 2)
        {
            vector<string> ans;
            string s = map[digits[0]];
            string t = map[digits[1]];
            
            int imax = s.length();
            int jmax = t.length();
            
            for(int i=0 ; i<imax;i++)
            {
                string temp;
                temp.push_back(s[i]);
                
                for(int j = 0 ; j < jmax ; j++)
                {
                    
                    ans.push_back(temp + t[j]);
                }
            }
            
            return ans;
        }
        else if(n == 3)
        {
            vector<string> ans;
            string s = map[digits[0]];
            string t = map[digits[1]];
            string u = map[digits[2]];
            
            int imax = s.length();
            int jmax = t.length();
            int kmax = u.length();
            
            for(int i=0 ; i<imax;i++)
            {
                string temp;
                temp.push_back(s[i]);
                
                for(int j = 0 ; j < jmax ; j++)
                {
                    
                    for(int k = 0 ; k < kmax ; k++)
                    {
                        ans.push_back(temp+t[j]+ u[k]);
                    }
                }
            }
            
            return ans;
        }else if(n == 4)
        {
            vector<string> ans;
            string s = map[digits[0]];
            string t = map[digits[1]];
            string u = map[digits[2]];
            string v = map[digits[3]];
            
            int imax = s.length();
            int jmax = t.length();
            int kmax = u.length();
            int lmax = v.length();
            
            for(int i=0 ; i<imax;i++)
            {
                string temp;
                temp.push_back(s[i]);
                
                for(int j = 0 ; j < jmax ; j++)
                {
                    
                    for(int k = 0 ; k < kmax ; k++)
                    {
                        for(int l = 0 ; l < lmax ; l++)
                        ans.push_back(temp+t[j]+ u[k] + v[l]);
                    }
                }
            }
            
            return ans;
        }
        
        return{};
        
    }
};