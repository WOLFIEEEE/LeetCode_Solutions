class Solution {
public:
    bool isPalindrome(string s) {
        
        string m = "";
        for(auto it:s)
        {
            if(isalnum(it))
            {
                m += tolower(it);
            }
        }
        
        int low = 0;
        int high = m.size()-1;
        
        cout << m ;
        
        while(low <= high)
        {
            if(m[low] != m[high]) return false;
            low++;
            high--;
        }
        
        return true;
        
    }
};