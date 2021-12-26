class Solution {
public:
    int compareVersion(string version1, string version2) 
    {
       int i1 = 0 ;
        int i2 = 0 ;
        int n1 = version1.length();
        int n2 = version2.length();
        
        while(i1 < n1 || i2<n2)
        {
            int v1 = 0;
            int v2 = 0;
            
            while(i1 < n1 && version1[i1] != '.')
            {
                v1 = v1*10 + (version1[i1]-'0');
                i1++;
            }
            
            while(i2 < n2 && version2[i2] != '.')
            {
                v2 = v2*10 + (version2[i2]-'0');
                i2++;
            }
            
            if(v1 < v2) return -1;
            else if(v1 > v2) return 1;
            
            i1++;
            i2++;
            
            
        }
        
        return 0;
    }
};