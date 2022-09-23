class Solution {
public:
    string convertToTitle(int c) {
        
        int A = 64;
        
        string s;
        while(c)
        {
            c -= 1;
            char temp = 'A' + c%26;
            // cout << temp << endl;
            s = temp + s;
            c = c/26;
        }
        
        return s;
        
        
        
    }
};