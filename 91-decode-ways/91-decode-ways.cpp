class Solution {
public:
    unordered_map<int , int> ans;
    int numDecodings(string s) {
        return recur(s , 0);  
    }
    int recur(string s , int pos)
    {
      int len = s.length();
        int count1 , count2 , count;
        if(len == 0 || s[0] == '0')
        {
            return 0;
        }
        if(len == 1)
        {
            return 1;
        }
        
        if(s[1]==0)
        {
            count2 = 0;
        }
        else
        {
            count2 = 1;
        }
         count1 = 1;
        
        int way1 , way2;
        for(int i = 2 ; i <=len ; i++)
        {   
            if(s[i-1] == '0') way1 = 0 ;
            else way1 = count2;
            
            string p = s.substr(i-2 , 2);
            
            if(stoi(p) <= 26 && stoi(p) > 0 && s[i-2] != '0')
            {
                way2 = count1;
            }else
            {
                way2 = 0;
            }
            
            count = way1+way2;
            count1 = count2;
            count2 = count;
        }
        
        return count;
    }
};